//----------------------------------------------------------
// author: "RM"
// name: "freeverb"
// version: "0.0"
//
// Code generated with Faust 2.75.9 (https://faust.grame.fr)
// Compiler options: -lang ocpp -ct 1 -es 1 -mcl 4 -mcd 9 -mfs 1024 -irt 4 -fls 4 -udd 1 -mdd 1024 -mdy 33 -ss 3 -single -ftz 0 
//----------------------------------------------------------

/* link with  */
#include <algorithm>
#include <cmath>
#include <math.h>
#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 


#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

class mydsp : public dsp {
  private:
	float 	fConst0KI; // step: 7
	FAUSTFLOAT 	fslider0;
	float 	fConst1KI; // step: 12
	FAUSTFLOAT 	fslider1;
	float 	fConst2KI; // step: 69
	FAUSTFLOAT 	fslider2;
	// Recursion delay fVec1SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec1SEState; // Single Delay
	// Recursion delay fVec3SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec3SEState; // Single Delay
	// Recursion delay fVec5SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec5SEState; // Single Delay
	// Recursion delay fVec7SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec7SEState; // Single Delay
	FAUSTFLOAT 	fslider3;
	float 	fConst3KI; // step: 109
	// Recursion delay fVec9SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec9SEState; // Single Delay
	// Recursion delay fVec11SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec11SEState; // Single Delay
	// Recursion delay fVec13SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec13SEState; // Single Delay
	// Recursion delay fVec15SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec15SEState; // Single Delay
	int 	iConst4KI; // step: 170
	int 	iConst5KI; // step: 172
	// Recursion delay fVec17SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec17SEState; // Single Delay
	// Recursion delay fVec19SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec19SEState; // Single Delay
	int 	IOTA0; // IOTA for clock: 0x142709de0
	float 	fVec40SE[8192]; // Ring Delay
	float 	fVec41SE[8192]; // Ring Delay
	int 	iConst6KI; // step: 193
	float 	fVec42SE[8192]; // Ring Delay
	float 	fVec43SE[8192]; // Ring Delay
	// Recursion delay fVec21SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec21SEState; // Single Delay
	// Recursion delay fVec23SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec23SEState; // Single Delay
	float 	fVec46SE[8192]; // Ring Delay
	int 	iConst7KI; // step: 212
	float 	fVec49SE[8192]; // Ring Delay
	// Recursion delay fVec25SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec25SEState; // Single Delay
	// Recursion delay fVec27SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec27SEState; // Single Delay
	float 	fVec54SE[8192]; // Ring Delay
	int 	iConst8KI; // step: 229
	float 	fVec56SE[8192]; // Ring Delay
	// Recursion delay fVec33SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec33SEState; // Single Delay
	// Recursion delay fVec0SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec0SEState; // Single Delay
	// Recursion delay fVec2SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec2SEState; // Single Delay
	// Recursion delay fVec35SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec35SEState; // Single Delay
	// Recursion delay fVec4SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec4SEState; // Single Delay
	// Recursion delay fVec6SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec6SEState; // Single Delay
	float 	fVec60SE[8192]; // Ring Delay
	int 	iConst9KI; // step: 249
	float 	fVec62SE[8192]; // Ring Delay
	// Recursion delay fVec8SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec8SEState; // Single Delay
	// Recursion delay fVec10SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec10SEState; // Single Delay
	float 	fVec70SE[8192]; // Ring Delay
	int 	iConst10KI; // step: 268
	float 	fVec72SE[8192]; // Ring Delay
	// Recursion delay fVec12SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec12SEState; // Single Delay
	// Recursion delay fVec14SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec14SEState; // Single Delay
	float 	fVec76SE[8192]; // Ring Delay
	int 	iConst11KI; // step: 282
	float 	fVec78SE[8192]; // Ring Delay
	// Recursion delay fVec16SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec16SEState; // Single Delay
	// Recursion delay fVec18SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec18SEState; // Single Delay
	float 	fVec82SE[8192]; // Ring Delay
	float 	fVec84SE[8192]; // Ring Delay
	// Recursion delay fVec20SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec20SEState; // Single Delay
	// Recursion delay fVec22SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec22SEState; // Single Delay
	// Recursion delay fVec24SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec24SEState; // Single Delay
	// Recursion delay fVec26SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec26SEState; // Single Delay
	// Recursion delay fVec32SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec32SEState; // Single Delay
	// Recursion delay fVec34SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec34SEState; // Single Delay
	// Recursion delay fRec32SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fRec33SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fRec34SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fRec35SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fRec36SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fRec37SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	int 	iConst12KI; // step: 397
	int 	iConst13KI; // step: 400
	int 	iConst14KI; // step: 401
	int 	iConst15KI; // step: 402
	float 	fVec116SE[2048]; // Ring Delay
	float 	fVec117SE[2048]; // Ring Delay
	float 	fVec118SE[2048]; // Ring Delay
	float 	fVec119SE[2048]; // Ring Delay
	int 	iConst16KI; // step: 434
	float 	fVec120SE[1024]; // Ring Delay
	int 	iConst17KI; // step: 436
	float 	fVec121SE[2048]; // Ring Delay
	int 	iConst18KI; // step: 438
	float 	fVec122SE[2048]; // Ring Delay
	int 	iConst19KI; // step: 440
	float 	fVec123SE[2048]; // Ring Delay
	// Recursion delay fRec38SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fRec39SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fVec92SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec92SEState; // Single Delay
	// Recursion delay fVec98SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec98SEState; // Single Delay
	// Recursion delay fVec104SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec104SEState; // Single Delay
	// Recursion delay fVec110SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec110SEState; // Single Delay
	// Recursion delay fVec93SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec93SEState; // Single Delay
	// Recursion delay fVec99SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec99SEState; // Single Delay
	// Recursion delay fVec105SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec105SEState; // Single Delay
	// Recursion delay fVec111SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec111SEState; // Single Delay
	float 	fVec132SEState; // Single Delay
	float 	fVec114SEState; // Single Delay
	float 	fVec108SEState; // Single Delay
	float 	fVec102SEState; // Single Delay
	float 	fVec133SEState; // Single Delay
	float 	fVec115SEState; // Single Delay
	float 	fVec109SEState; // Single Delay
	float 	fVec103SEState; // Single Delay
	int fSampleRate;

  public:
	virtual void metadata(Meta* m) { 
		m->declare("author", "RM");
		m->declare("compile_options", "-lang ocpp -ct 1 -es 1 -mcl 4 -mcd 9 -mfs 1024 -irt 4 -fls 4 -udd 1 -mdd 1024 -mdy 33 -ss 3 -single -ftz 0");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "1.1.0");
		m->declare("demos.lib/freeverb_demo:author", " Romain Michon");
		m->declare("demos.lib/freeverb_demo:licence", "LGPL");
		m->declare("demos.lib/name", "Faust Demos Library");
		m->declare("demos.lib/version", "1.2.0");
		m->declare("description", "Freeverb demo application.");
		m->declare("filename", "freeverb.dsp");
		m->declare("filters.lib/allpass_comb:author", "Julius O. Smith III");
		m->declare("filters.lib/allpass_comb:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/allpass_comb:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/version", "1.3.0");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.8.0");
		m->declare("name", "freeverb");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("reverbs.lib/mono_freeverb:author", "Romain Michon");
		m->declare("reverbs.lib/name", "Faust Reverb Library");
		m->declare("reverbs.lib/stereo_freeverb:author", "Romain Michon");
		m->declare("reverbs.lib/version", "1.3.0");
		m->declare("version", "0.0");
	}

	virtual int getNumInputs() { return 2; }
	virtual int getNumOutputs() { return 2; }
	static void classInit(int sample_rate) {
	}
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0KI = std::min(1.92e+05f, std::max(1.0f, float(fSampleRate))); // step: 7
		fConst1KI = (1.764e+04f / fConst0KI); // step: 12
		fConst2KI = (12348.0f / fConst0KI); // step: 69
		fConst3KI = (0.0010430838f * fConst0KI); // step: 109
		iConst4KI = int((0.026938776f * fConst0KI)); // step: 170
		iConst5KI = int((0.025306122f * fConst0KI)); // step: 172
		IOTA0 = 0; // init IOTA for clock: 0x142709de0
		iConst6KI = int((0.028956916f * fConst0KI)); // step: 193
		iConst7KI = int((0.030748298f * fConst0KI)); // step: 212
		iConst8KI = int((0.0322449f * fConst0KI)); // step: 229
		iConst9KI = int((0.033809524f * fConst0KI)); // step: 249
		iConst10KI = int((0.035306122f * fConst0KI)); // step: 268
		iConst11KI = int((0.036666665f * fConst0KI)); // step: 282
		iConst12KI = int((0.0051020407f * fConst0KI)); // step: 397
		iConst13KI = int((0.0077324263f * fConst0KI)); // step: 400
		iConst14KI = int((0.01f * fConst0KI)); // step: 401
		iConst15KI = int((0.0126077095f * fConst0KI)); // step: 402
		iConst16KI = std::min(1024, std::max(0, (iConst12KI + -1))); // step: 434
		iConst17KI = std::min(1024, std::max(0, (iConst13KI + -1))); // step: 436
		iConst18KI = std::min(1024, std::max(0, (iConst14KI + -1))); // step: 438
		iConst19KI = std::min(1024, std::max(0, (iConst15KI + -1))); // step: 440
	}
	virtual void instanceResetUserInterface() {
		fslider0 = 0.5f;
		fslider1 = 0.5f;
		fslider2 = 0.3333f;
		fslider3 = 0.5f;
	}
	virtual void instanceClear() {
		fVec1SEState = 0;
		fVec3SEState = 0;
		fVec5SEState = 0;
		fVec7SEState = 0;
		fVec9SEState = 0;
		fVec11SEState = 0;
		fVec13SEState = 0;
		fVec15SEState = 0;
		fVec17SEState = 0;
		fVec19SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec40SE[i] = 0; }
		fVec40SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec41SE[i] = 0; }
		fVec41SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec42SE[i] = 0; }
		fVec42SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec43SE[i] = 0; }
		fVec43SE[0] = -1;  // detect unintialized
		fVec21SEState = 0;
		fVec23SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec46SE[i] = 0; }
		fVec46SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec49SE[i] = 0; }
		fVec49SE[0] = -1;  // detect unintialized
		fVec25SEState = 0;
		fVec27SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec54SE[i] = 0; }
		fVec54SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec56SE[i] = 0; }
		fVec56SE[0] = -1;  // detect unintialized
		fVec33SEState = 0;
		fVec0SEState = 0;
		fVec2SEState = 0;
		fVec35SEState = 0;
		fVec4SEState = 0;
		fVec6SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec60SE[i] = 0; }
		fVec60SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec62SE[i] = 0; }
		fVec62SE[0] = -1;  // detect unintialized
		fVec8SEState = 0;
		fVec10SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec70SE[i] = 0; }
		fVec70SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec72SE[i] = 0; }
		fVec72SE[0] = -1;  // detect unintialized
		fVec12SEState = 0;
		fVec14SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec76SE[i] = 0; }
		fVec76SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec78SE[i] = 0; }
		fVec78SE[0] = -1;  // detect unintialized
		fVec16SEState = 0;
		fVec18SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec82SE[i] = 0; }
		fVec82SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec84SE[i] = 0; }
		fVec84SE[0] = -1;  // detect unintialized
		fVec20SEState = 0;
		fVec22SEState = 0;
		fVec24SEState = 0;
		fVec26SEState = 0;
		fVec32SEState = 0;
		fVec34SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec116SE[i] = 0; }
		fVec116SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec117SE[i] = 0; }
		fVec117SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec118SE[i] = 0; }
		fVec118SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec119SE[i] = 0; }
		fVec119SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 1024; i++) { fVec120SE[i] = 0; }
		fVec120SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec121SE[i] = 0; }
		fVec121SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec122SE[i] = 0; }
		fVec122SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec123SE[i] = 0; }
		fVec123SE[0] = -1;  // detect unintialized
		fVec92SEState = 0;
		fVec98SEState = 0;
		fVec104SEState = 0;
		fVec110SEState = 0;
		fVec93SEState = 0;
		fVec99SEState = 0;
		fVec105SEState = 0;
		fVec111SEState = 0;
		fVec132SEState = 0;
		fVec114SEState = 0;
		fVec108SEState = 0;
		fVec102SEState = 0;
		fVec133SEState = 0;
		fVec115SEState = 0;
		fVec109SEState = 0;
		fVec103SEState = 0;
	}
	virtual void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	virtual void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	virtual mydsp* clone() {
		return new mydsp();
	}
	virtual int getSampleRate() {
		return fSampleRate;
	}
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openHorizontalBox("Freeverb");
		ui_interface->declare(0, "0", "");
		ui_interface->openVerticalBox("0x00");
		ui_interface->declare(&fslider0, "0", "");
		ui_interface->declare(&fslider0, "style", "knob");
		ui_interface->declare(&fslider0, "tooltip", "Somehow control the         density of the reverb.");
		ui_interface->addVerticalSlider("Damp", &fslider0, 0.5f, 0.0f, 1.0f, 0.025f);
		ui_interface->declare(&fslider1, "1", "");
		ui_interface->declare(&fslider1, "style", "knob");
		ui_interface->declare(&fslider1, "tooltip", "The room size         between 0 and 1 with 1 for the largest room.");
		ui_interface->addVerticalSlider("RoomSize", &fslider1, 0.5f, 0.0f, 1.0f, 0.025f);
		ui_interface->declare(&fslider3, "2", "");
		ui_interface->declare(&fslider3, "style", "knob");
		ui_interface->declare(&fslider3, "tooltip", "Spatial         spread between 0 and 1 with 1 for maximum spread.");
		ui_interface->addVerticalSlider("Stereo Spread", &fslider3, 0.5f, 0.0f, 1.0f, 0.01f);
		ui_interface->closeBox();
		ui_interface->declare(&fslider2, "1", "");
		ui_interface->declare(&fslider2, "tooltip", "The amount of reverb applied to the signal         between 0 and 1 with 1 for the maximum amount of reverb.");
		ui_interface->addVerticalSlider("Wet", &fslider2, 0.3333f, 0.0f, 1.0f, 0.025f);
		ui_interface->closeBox();
	}
	virtual void compute (int count, FAUSTFLOAT** input, FAUSTFLOAT** output) {
		float 	fSlow0BE = (fConst1KI * float(fslider0)); // Zone 2, step: 21
		float 	fSlow1BE = (1.0f - fSlow0BE); // Zone 2, step: 33
		float 	fSlow2BE = float(fslider2); // Zone 2, step: 72
		float 	fTemp0SE; // step: 73
		float 	fTemp1SE; // step: 74
		float 	fVec1SE[2];
		float 	fVec3SE[2];
		float 	fVec5SE[2];
		float 	fVec7SE[2];
		float 	fSlow3BE = (0.1f * fSlow2BE); // Zone 2, step: 118
		float 	fSlow4BE = ((fConst2KI * float(fslider1)) + 0.7f); // Zone 2, step: 119
		float 	fVec9SE[2];
		float 	fVec11SE[2];
		float 	fTemp2SE; // step: 147
		float 	fVec13SE[2];
		float 	fVec15SE[2];
		int 	iSlow5BE = int((fConst3KI * float(fslider3))); // Zone 2, step: 161
		float 	fVec17SE[2];
		float 	fVec19SE[2];
		int 	iSlow6BE = (iConst4KI + iSlow5BE); // Zone 2, step: 184
		int 	iSlow7BE = (iConst5KI + iSlow5BE); // Zone 2, step: 186
		float 	fVec21SE[2];
		float 	fVec23SE[2];
		int 	iSlow8BE = (iConst6KI + iSlow5BE); // Zone 2, step: 205
		float 	fVec25SE[2];
		float 	fVec27SE[2];
		int 	iSlow9BE = (iConst7KI + iSlow5BE); // Zone 2, step: 224
		float 	fVec33SE[2];
		float 	fVec0SE[2];
		float 	fVec2SE[2];
		float 	fVec35SE[2];
		float 	fVec4SE[2];
		float 	fVec6SE[2];
		int 	iSlow10BE = (iConst8KI + iSlow5BE); // Zone 2, step: 244
		float 	fVec8SE[2];
		float 	fVec10SE[2];
		int 	iSlow11BE = (iConst9KI + iSlow5BE); // Zone 2, step: 263
		float 	fVec12SE[2];
		float 	fVec14SE[2];
		int 	iSlow12BE = (iConst10KI + iSlow5BE); // Zone 2, step: 279
		float 	fVec16SE[2];
		float 	fVec18SE[2];
		int 	iSlow13BE = (iConst11KI + iSlow5BE); // Zone 2, step: 292
		float 	fVec20SE[2];
		float 	fVec22SE[2];
		float 	fVec24SE[2];
		float 	fVec26SE[2];
		float 	fVec32SE[2];
		float 	fVec34SE[2];
		float 	fTemp3SE; // step: 329
		float 	fTemp4SE; // step: 330
		float 	fTemp5SE; // step: 350
		float 	fTemp6SE; // step: 351
		float 	fTemp7SE; // step: 370
		float 	fTemp8SE; // step: 371
		int 	iSlow14BE = (iSlow5BE + -1); // Zone 2, step: 396
		float 	fTemp9SE; // step: 404
		float 	fTemp10SE; // step: 409
		int 	iSlow15BE = std::min(1024, std::max(0, (iConst12KI + iSlow14BE))); // Zone 2, step: 426
		int 	iSlow16BE = std::min(1024, std::max(0, (iConst13KI + iSlow14BE))); // Zone 2, step: 428
		int 	iSlow17BE = std::min(1024, std::max(0, (iConst14KI + iSlow14BE))); // Zone 2, step: 430
		int 	iSlow18BE = std::min(1024, std::max(0, (iConst15KI + iSlow14BE))); // Zone 2, step: 432
		float 	fSlow19BE = (1.0f - fSlow2BE); // Zone 2, step: 454
		float 	fVec92SE[2];
		float 	fVec98SE[2];
		float 	fVec104SE[2];
		float 	fVec110SE[2];
		float 	fVec93SE[2];
		float 	fVec99SE[2];
		float 	fVec105SE[2];
		float 	fVec111SE[2];
		float 	fVec132SE[2];
		float 	fVec114SE[2];
		float 	fVec108SE[2];
		float 	fVec102SE[2];
		float 	fVec133SE[2];
		float 	fVec115SE[2];
		float 	fVec109SE[2];
		float 	fVec103SE[2];
		FAUSTFLOAT* input0 = input[0]; // Zone 3
		FAUSTFLOAT* input1 = input[1]; // Zone 3
		FAUSTFLOAT* output0 = output[0]; // Zone 3
		FAUSTFLOAT* output1 = output[1]; // Zone 3
		fVec1SE[1] = fVec1SEState;
		fVec3SE[1] = fVec3SEState;
		fVec5SE[1] = fVec5SEState;
		fVec7SE[1] = fVec7SEState;
		fVec9SE[1] = fVec9SEState;
		fVec11SE[1] = fVec11SEState;
		fVec13SE[1] = fVec13SEState;
		fVec15SE[1] = fVec15SEState;
		fVec17SE[1] = fVec17SEState;
		fVec19SE[1] = fVec19SEState;
		fVec21SE[1] = fVec21SEState;
		fVec23SE[1] = fVec23SEState;
		fVec25SE[1] = fVec25SEState;
		fVec27SE[1] = fVec27SEState;
		fVec33SE[1] = fVec33SEState;
		fVec0SE[1] = fVec0SEState;
		fVec2SE[1] = fVec2SEState;
		fVec35SE[1] = fVec35SEState;
		fVec4SE[1] = fVec4SEState;
		fVec6SE[1] = fVec6SEState;
		fVec8SE[1] = fVec8SEState;
		fVec10SE[1] = fVec10SEState;
		fVec12SE[1] = fVec12SEState;
		fVec14SE[1] = fVec14SEState;
		fVec16SE[1] = fVec16SEState;
		fVec18SE[1] = fVec18SEState;
		fVec20SE[1] = fVec20SEState;
		fVec22SE[1] = fVec22SEState;
		fVec24SE[1] = fVec24SEState;
		fVec26SE[1] = fVec26SEState;
		fVec32SE[1] = fVec32SEState;
		fVec34SE[1] = fVec34SEState;
		fVec92SE[1] = fVec92SEState;
		fVec98SE[1] = fVec98SEState;
		fVec104SE[1] = fVec104SEState;
		fVec110SE[1] = fVec110SEState;
		fVec93SE[1] = fVec93SEState;
		fVec99SE[1] = fVec99SEState;
		fVec105SE[1] = fVec105SEState;
		fVec111SE[1] = fVec111SEState;
		fVec132SE[1] = fVec132SEState;
		fVec114SE[1] = fVec114SEState;
		fVec108SE[1] = fVec108SEState;
		fVec102SE[1] = fVec102SEState;
		fVec133SE[1] = fVec133SEState;
		fVec115SE[1] = fVec115SEState;
		fVec109SE[1] = fVec109SEState;
		fVec103SE[1] = fVec103SEState;
		for (int i=0; i<count; i++) {
			fTemp0SE = (float)input1[i]; // step: 73
			fTemp1SE = (float)input0[i]; // step: 74
			fVec1SE[0] = ((fSlow0BE * fVec1SE[1]) + (fSlow1BE * fVec0SE[1]));
			fVec3SE[0] = ((fSlow0BE * fVec3SE[1]) + (fSlow1BE * fVec2SE[1]));
			fVec5SE[0] = ((fSlow0BE * fVec5SE[1]) + (fSlow1BE * fVec4SE[1]));
			fVec7SE[0] = ((fSlow0BE * fVec7SE[1]) + (fSlow1BE * fVec6SE[1]));
			fVec9SE[0] = ((fSlow0BE * fVec9SE[1]) + (fSlow1BE * fVec8SE[1]));
			fVec11SE[0] = ((fSlow0BE * fVec11SE[1]) + (fSlow1BE * fVec10SE[1]));
			fTemp2SE = (fSlow3BE * (fTemp1SE + fTemp0SE)); // step: 147
			fVec13SE[0] = ((fSlow0BE * fVec13SE[1]) + (fSlow1BE * fVec12SE[1]));
			fVec15SE[0] = ((fSlow0BE * fVec15SE[1]) + (fSlow1BE * fVec14SE[1]));
			fVec17SE[0] = ((fSlow0BE * fVec17SE[1]) + (fSlow1BE * fVec16SE[1]));
			fVec19SE[0] = ((fSlow0BE * fVec19SE[1]) + (fSlow1BE * fVec18SE[1]));
			fVec40SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec1SE[0]));
			fVec41SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec3SE[0]));
			fVec42SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec5SE[0]));
			fVec43SE[IOTA0&8191] = ((fSlow4BE * fVec7SE[0]) + fTemp2SE);
			fVec21SE[0] = ((fSlow0BE * fVec21SE[1]) + (fSlow1BE * fVec20SE[1]));
			fVec23SE[0] = ((fSlow0BE * fVec23SE[1]) + (fSlow1BE * fVec22SE[1]));
			fVec46SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec9SE[0]));
			fVec49SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec11SE[0]));
			fVec25SE[0] = ((fSlow0BE * fVec25SE[1]) + (fSlow1BE * fVec24SE[1]));
			fVec27SE[0] = ((fSlow0BE * fVec27SE[1]) + (fSlow1BE * fVec26SE[1]));
			fVec54SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec13SE[0]));
			fVec56SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec15SE[0]));
			fVec33SE[0] = ((fSlow0BE * fVec33SE[1]) + (fSlow1BE * fVec32SE[1]));
			fVec0SE[0] = fVec40SE[(IOTA0-iSlow6BE)&8191];
			fVec2SE[0] = fVec41SE[(IOTA0-iSlow7BE)&8191];
			fVec35SE[0] = ((fSlow0BE * fVec35SE[1]) + (fSlow1BE * fVec34SE[1]));
			fVec4SE[0] = fVec42SE[(IOTA0-iConst4KI)&8191];
			fVec6SE[0] = fVec43SE[(IOTA0-iConst5KI)&8191];
			fVec60SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec17SE[0]));
			fVec62SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec19SE[0]));
			fVec8SE[0] = fVec46SE[(IOTA0-iSlow8BE)&8191];
			fVec10SE[0] = fVec49SE[(IOTA0-iConst6KI)&8191];
			fVec70SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec21SE[0]));
			fVec72SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec23SE[0]));
			fVec12SE[0] = fVec54SE[(IOTA0-iSlow9BE)&8191];
			fVec14SE[0] = fVec56SE[(IOTA0-iConst7KI)&8191];
			fVec76SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec25SE[0]));
			fVec78SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec27SE[0]));
			fVec16SE[0] = fVec60SE[(IOTA0-iSlow10BE)&8191];
			fVec18SE[0] = fVec62SE[(IOTA0-iConst8KI)&8191];
			fVec82SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec33SE[0]));
			fVec84SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec35SE[0]));
			fVec20SE[0] = fVec70SE[(IOTA0-iSlow11BE)&8191];
			fVec22SE[0] = fVec72SE[(IOTA0-iConst9KI)&8191];
			fVec24SE[0] = fVec76SE[(IOTA0-iSlow12BE)&8191];
			fVec26SE[0] = fVec78SE[(IOTA0-iConst10KI)&8191];
			fVec32SE[0] = fVec82SE[(IOTA0-iSlow13BE)&8191];
			fVec34SE[0] = fVec84SE[(IOTA0-iConst11KI)&8191];
			fTemp3SE = ((((((((fVec2SE[0] + fVec0SE[0]) + fVec8SE[0]) + fVec12SE[0]) + fVec16SE[0]) + fVec20SE[0]) + fVec24SE[0]) + fVec32SE[0]) + (0.5f * fVec92SE[1])); // step: 329
			fTemp4SE = ((((((((fVec6SE[0] + fVec4SE[0]) + fVec10SE[0]) + fVec14SE[0]) + fVec18SE[0]) + fVec22SE[0]) + fVec26SE[0]) + fVec34SE[0]) + (0.5f * fVec93SE[1])); // step: 330
			float 	fRec32SE = -(0.5f * fTemp3SE); // Zero delay
			float 	fRec33SE = -(0.5f * fTemp4SE); // Zero delay
			fTemp5SE = (fVec102SE[1] + (fRec32SE + (0.5f * fVec98SE[1]))); // step: 350
			fTemp6SE = (fVec103SE[1] + (fRec33SE + (0.5f * fVec99SE[1]))); // step: 351
			float 	fRec34SE = -(0.5f * fTemp5SE); // Zero delay
			float 	fRec35SE = -(0.5f * fTemp6SE); // Zero delay
			fTemp7SE = (fVec108SE[1] + (fRec34SE + (0.5f * fVec104SE[1]))); // step: 370
			fTemp8SE = (fVec109SE[1] + (fRec35SE + (0.5f * fVec105SE[1]))); // step: 371
			float 	fRec36SE = -(0.5f * fTemp7SE); // Zero delay
			float 	fRec37SE = -(0.5f * fTemp8SE); // Zero delay
			fTemp9SE = (fVec114SE[1] + (fRec36SE + (0.5f * fVec110SE[1]))); // step: 404
			fTemp10SE = (fVec115SE[1] + (fRec37SE + (0.5f * fVec111SE[1]))); // step: 409
			fVec116SE[IOTA0&2047] = fTemp9SE;
			fVec117SE[IOTA0&2047] = fTemp7SE;
			fVec118SE[IOTA0&2047] = fTemp5SE;
			fVec119SE[IOTA0&2047] = fTemp3SE;
			fVec120SE[IOTA0&1023] = fTemp10SE;
			fVec121SE[IOTA0&2047] = fTemp8SE;
			fVec122SE[IOTA0&2047] = fTemp6SE;
			fVec123SE[IOTA0&2047] = fTemp4SE;
			float 	fRec38SE = -(0.5f * fTemp9SE); // Zero delay
			float 	fRec39SE = -(0.5f * fTemp10SE); // Zero delay
			fVec92SE[0] = fVec119SE[(IOTA0-iSlow18BE)&2047];
			fVec98SE[0] = fVec118SE[(IOTA0-iSlow17BE)&2047];
			fVec104SE[0] = fVec117SE[(IOTA0-iSlow16BE)&2047];
			fVec110SE[0] = fVec116SE[(IOTA0-iSlow15BE)&2047];
			fVec93SE[0] = fVec123SE[(IOTA0-iConst19KI)&2047];
			fVec99SE[0] = fVec122SE[(IOTA0-iConst18KI)&2047];
			fVec105SE[0] = fVec121SE[(IOTA0-iConst17KI)&2047];
			fVec111SE[0] = fVec120SE[(IOTA0-iConst16KI)&1023];
			fVec132SE[0] = fVec110SE[0];
			fVec114SE[0] = fVec104SE[0];
			fVec108SE[0] = fVec98SE[0];
			fVec102SE[0] = fVec92SE[0];
			fVec133SE[0] = fVec111SE[0];
			fVec115SE[0] = fVec105SE[0];
			fVec109SE[0] = fVec99SE[0];
			fVec103SE[0] = fVec93SE[0];
			output0[i] = (FAUSTFLOAT)(((fRec39SE + fVec133SE[1]) + (fSlow19BE * fTemp1SE)));  // Zone Exec Code
			output1[i] = (FAUSTFLOAT)(((fSlow19BE * fTemp0SE) + (fRec38SE + fVec132SE[1])));  // Zone Exec Code
			// post processing
			fVec103SE[1] = fVec103SE[0];
			fVec109SE[1] = fVec109SE[0];
			fVec115SE[1] = fVec115SE[0];
			fVec133SE[1] = fVec133SE[0];
			fVec102SE[1] = fVec102SE[0];
			fVec108SE[1] = fVec108SE[0];
			fVec114SE[1] = fVec114SE[0];
			fVec132SE[1] = fVec132SE[0];
			fVec111SE[1] = fVec111SE[0];
			fVec105SE[1] = fVec105SE[0];
			fVec99SE[1] = fVec99SE[0];
			fVec93SE[1] = fVec93SE[0];
			fVec110SE[1] = fVec110SE[0];
			fVec104SE[1] = fVec104SE[0];
			fVec98SE[1] = fVec98SE[0];
			fVec92SE[1] = fVec92SE[0];
			fVec34SE[1] = fVec34SE[0];
			fVec32SE[1] = fVec32SE[0];
			fVec26SE[1] = fVec26SE[0];
			fVec24SE[1] = fVec24SE[0];
			fVec22SE[1] = fVec22SE[0];
			fVec20SE[1] = fVec20SE[0];
			fVec18SE[1] = fVec18SE[0];
			fVec16SE[1] = fVec16SE[0];
			fVec14SE[1] = fVec14SE[0];
			fVec12SE[1] = fVec12SE[0];
			fVec10SE[1] = fVec10SE[0];
			fVec8SE[1] = fVec8SE[0];
			fVec6SE[1] = fVec6SE[0];
			fVec4SE[1] = fVec4SE[0];
			fVec35SE[1] = fVec35SE[0];
			fVec2SE[1] = fVec2SE[0];
			fVec0SE[1] = fVec0SE[0];
			fVec33SE[1] = fVec33SE[0];
			fVec27SE[1] = fVec27SE[0];
			fVec25SE[1] = fVec25SE[0];
			fVec23SE[1] = fVec23SE[0];
			fVec21SE[1] = fVec21SE[0];
			++IOTA0; // inc IOTA for clock: 0x142709de0
			fVec19SE[1] = fVec19SE[0];
			fVec17SE[1] = fVec17SE[0];
			fVec15SE[1] = fVec15SE[0];
			fVec13SE[1] = fVec13SE[0];
			fVec11SE[1] = fVec11SE[0];
			fVec9SE[1] = fVec9SE[0];
			fVec7SE[1] = fVec7SE[0];
			fVec5SE[1] = fVec5SE[0];
			fVec3SE[1] = fVec3SE[0];
			fVec1SE[1] = fVec1SE[0];
		}
		fVec1SEState = fVec1SE[1];
		fVec3SEState = fVec3SE[1];
		fVec5SEState = fVec5SE[1];
		fVec7SEState = fVec7SE[1];
		fVec9SEState = fVec9SE[1];
		fVec11SEState = fVec11SE[1];
		fVec13SEState = fVec13SE[1];
		fVec15SEState = fVec15SE[1];
		fVec17SEState = fVec17SE[1];
		fVec19SEState = fVec19SE[1];
		fVec21SEState = fVec21SE[1];
		fVec23SEState = fVec23SE[1];
		fVec25SEState = fVec25SE[1];
		fVec27SEState = fVec27SE[1];
		fVec33SEState = fVec33SE[1];
		fVec0SEState = fVec0SE[1];
		fVec2SEState = fVec2SE[1];
		fVec35SEState = fVec35SE[1];
		fVec4SEState = fVec4SE[1];
		fVec6SEState = fVec6SE[1];
		fVec8SEState = fVec8SE[1];
		fVec10SEState = fVec10SE[1];
		fVec12SEState = fVec12SE[1];
		fVec14SEState = fVec14SE[1];
		fVec16SEState = fVec16SE[1];
		fVec18SEState = fVec18SE[1];
		fVec20SEState = fVec20SE[1];
		fVec22SEState = fVec22SE[1];
		fVec24SEState = fVec24SE[1];
		fVec26SEState = fVec26SE[1];
		fVec32SEState = fVec32SE[1];
		fVec34SEState = fVec34SE[1];
		fVec92SEState = fVec92SE[1];
		fVec98SEState = fVec98SE[1];
		fVec104SEState = fVec104SE[1];
		fVec110SEState = fVec110SE[1];
		fVec93SEState = fVec93SE[1];
		fVec99SEState = fVec99SE[1];
		fVec105SEState = fVec105SE[1];
		fVec111SEState = fVec111SE[1];
		fVec132SEState = fVec132SE[1];
		fVec114SEState = fVec114SE[1];
		fVec108SEState = fVec108SE[1];
		fVec102SEState = fVec102SE[1];
		fVec133SEState = fVec133SE[1];
		fVec115SEState = fVec115SE[1];
		fVec109SEState = fVec109SE[1];
		fVec103SEState = fVec103SE[1];
	}
};


