declare name "freeverb";
declare version "0.0";
declare author "RM";
declare description "Freeverb demo application.";

import("stdfaust.lib");

process = ondemand(dm.freeverb_demo)(button("run")==1);
