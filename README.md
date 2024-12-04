
# freeverb-bench
This project benchmarks the performance of code generated by the Faust compiler for `freeverb.dsp`, using various backends, branches, and options.

## Workflow:
1. **Compilation**: `freeverb.dsp` is compiled to C++ files using different options, backends, and branches of the Faust compiler.
2. **File Placement**: The resulting `.cpp` files are saved in the `src/` folder.
3. **Building**: The `.cpp` files are compiled using `fcbenchtool`:
   ```bash
   for f in src/*.cpp; do fcbenchtool $f; done
   ```
4. **Execution**: The compiled binaries are executed to measure their performance:
   ```bash
   for f in src/*.cpp; do ./${f%.*}; done
   ```

## Notes:
- The `fcbenchtool` is available at [faustcompilerbenchtool](https://github.com/orlarey/faustcompilerbenchtool). It is suitable for this project as it compiles `.cpp` files (not `.dsp` files).
- The naming convention of the `.cpp` files encodes how they were generated:

  - `md`: Compiled with the `faust master-dev` branch.
  - `od`: Compiled with the `faust master-dev-improve-iir-5-ondemand-2` branch.
  - `cpp`: Generated using `-lang cpp`.
  - `ocpp`: Generated using `-lang ocpp`.
  - `sn`: Indicates the scheduling strategy used (e.g., `-ss n`).
  - `li`: Indicates a manual modification to introduce local IOTAs.
  - `od0`: Indicates an ondemand version of the freeverb tha is never running
  - `od1`: Indicates an ondemand version of the freeverb tha is always running
  

---

## Results:
Tests were conducted on a **MacBook Air M1 (2020)** with **clang++-mp-18**. The following execution times were observed:

| File                           | Execution Time |
| ------------------------------ | -------------- |
| `./src/freeverb-md-cpp`        | 1.15267 ms     |
| `./src/freeverb-md-ocpp`       | 0.699541 ms    |
| `./src/freeverb-od-ocpp-s0`    | 0.639 ms       |
| `./src/freeverb-od-ocpp-s1`    | 2.68208 ms     |
| `./src/freeverb-od-ocpp-s2-li` | 0.647708 ms    |
| `./src/freeverb-od-ocpp-s2`    | 0.611917 ms    |
| `./src/freeverb-od-ocpp-s3`    | 0.764458 ms    |
| `./src/freeverb-od-ocpp`       | 0.63625 ms     |
| `./src/od0freeverb-od-ocpp-s2` | 0.012875 ms    |
| `./src/od1freeverb-od-ocpp-s2` | 0.692750 ms    |
| `./src/od0freeverb-od-ocpp-s3` | 0.008166 ms    |
| `./src/od1freeverb-od-ocpp-s3` | 0.692583 ms    |

The same tests on a **AMD Ryzen™ 7 7735HS** with **clang++-18** have the following execution times:

| File                           | Execution Time |
| ------------------------------ | -------------- |
| `./src/freeverb-md-cpp`        | 1.29253 ms     |
| `./src/freeverb-md-ocpp`       | 1.12363 ms     |
| `./src/freeverb-od-ocpp-s0`    | 0.968309 ms    |
| `./src/freeverb-od-ocpp-s1`    | 1.42115 ms     |
| `./src/freeverb-od-ocpp-s2-li` | 1.03247 ms     |
| `./src/freeverb-od-ocpp-s2`    | 1.00421 ms     |
| `./src/freeverb-od-ocpp-s3`    | 1.23566 ms     |
| `./src/freeverb-od-ocpp`       | 0.977707 ms    |
| `./src/od0freeverb-od-ocpp-s2` | 0.004037 ms    |
| `./src/od1freeverb-od-ocpp-s2` | 1.0203 ms      |
| `./src/od0freeverb-od-ocpp-s3` | 0.004228 ms    |
| `./src/od1freeverb-od-ocpp-s3` | 1.00264 ms     |

The same tests on a **AMD Ryzen™ 7 7735HS** but using **g++-14** have the following execution times:

```markdown
| File                               | Execution Time |
|------------------------------------|-------------|
| `./src/freeverb-md-cpp`            | 1.36022 ms  |
| `./src/freeverb-md-ocpp`           | 1.00281 ms  |
| `./src/freeverb-od-ocpp`           | 0.829129 ms |
| `./src/freeverb-od-ocpp-s0`        | 0.825723 ms |
| `./src/freeverb-od-ocpp-s1`        | 1.43502 ms  |
| `./src/freeverb-od-ocpp-s2`        | 0.973048 ms |
| `./src/freeverb-od-ocpp-s2-li`     | 0.968099 ms |
| `./src/freeverb-od-ocpp-s3`        | 1.19261 ms  |
| `./src/od0freeverb-od-ocpp-s2`     | 0.00518 ms  |
| `./src/od0freeverb-od-ocpp-s3`     | 0.00529 ms  |
| `./src/od1freeverb-od-ocpp-s2`     | 1.06496 ms  |
| `./src/od1freeverb-od-ocpp-s3`     | 1.06941 ms  |
``````
