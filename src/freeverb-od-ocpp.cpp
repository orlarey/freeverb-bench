//----------------------------------------------------------
// author: "RM"
// name: "freeverb"
// version: "0.0"
//
// Code generated with Faust 2.75.9 (https://faust.grame.fr)
// Compiler options: -lang ocpp -ct 1 -es 1 -mcl 4 -mcd 9 -mfs 1024 -irt 4 -fls 4 -udd 1 -mdd 1024 -mdy 33 -ss 0 -single -ftz 0 
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
	FAUSTFLOAT 	fslider0;
	float 	fConst0KI; // step: 15
	float 	fConst1KI; // step: 16
	// Recursion delay fVec0SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec0SEState; // Single Delay
	FAUSTFLOAT 	fslider1;
	float 	fConst2KI; // step: 29
	FAUSTFLOAT 	fslider2;
	int 	IOTA0; // IOTA for clock: 0x154e12600
	float 	fVec3SE[8192]; // Ring Delay
	int 	iConst3KI; // step: 45
	// Recursion delay fVec1SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec1SEState; // Single Delay
	// Recursion delay fVec6SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec6SEState; // Single Delay
	float 	fVec9SE[8192]; // Ring Delay
	int 	iConst4KI; // step: 63
	// Recursion delay fVec7SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec7SEState; // Single Delay
	// Recursion delay fVec12SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec12SEState; // Single Delay
	float 	fVec15SE[8192]; // Ring Delay
	int 	iConst5KI; // step: 82
	// Recursion delay fVec13SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec13SEState; // Single Delay
	// Recursion delay fVec18SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec18SEState; // Single Delay
	float 	fVec21SE[8192]; // Ring Delay
	int 	iConst6KI; // step: 101
	// Recursion delay fVec19SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec19SEState; // Single Delay
	// Recursion delay fVec24SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec24SEState; // Single Delay
	float 	fVec27SE[8192]; // Ring Delay
	int 	iConst7KI; // step: 120
	// Recursion delay fVec25SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec25SEState; // Single Delay
	// Recursion delay fVec30SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec30SEState; // Single Delay
	float 	fVec33SE[8192]; // Ring Delay
	int 	iConst8KI; // step: 139
	// Recursion delay fVec31SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec31SEState; // Single Delay
	// Recursion delay fVec36SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec36SEState; // Single Delay
	float 	fVec39SE[8192]; // Ring Delay
	int 	iConst9KI; // step: 158
	// Recursion delay fVec37SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec37SEState; // Single Delay
	// Recursion delay fVec42SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec42SEState; // Single Delay
	float 	fVec45SE[8192]; // Ring Delay
	int 	iConst10KI; // step: 177
	// Recursion delay fVec43SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec43SEState; // Single Delay
	float 	fVec49SE[2048]; // Ring Delay
	int 	iConst11KI; // step: 191
	int 	iConst12KI; // step: 194
	// Recursion delay fVec48SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec48SEState; // Single Delay
	float 	fVec52SEState; // Single Delay
	// Recursion delay fRec17SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec56SE[2048]; // Ring Delay
	int 	iConst13KI; // step: 213
	int 	iConst14KI; // step: 216
	// Recursion delay fVec55SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec55SEState; // Single Delay
	float 	fVec59SEState; // Single Delay
	// Recursion delay fRec19SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec63SE[2048]; // Ring Delay
	int 	iConst15KI; // step: 234
	int 	iConst16KI; // step: 237
	// Recursion delay fVec62SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec62SEState; // Single Delay
	float 	fVec66SEState; // Single Delay
	// Recursion delay fRec21SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec70SE[1024]; // Ring Delay
	int 	iConst17KI; // step: 255
	int 	iConst18KI; // step: 258
	// Recursion delay fVec69SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec69SEState; // Single Delay
	float 	fVec73SEState; // Single Delay
	// Recursion delay fVec74SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec74SEState; // Single Delay
	float 	fVec77SE[8192]; // Ring Delay
	FAUSTFLOAT 	fslider3;
	float 	fConst19KI; // step: 277
	// Recursion delay fVec75SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec75SEState; // Single Delay
	// Recursion delay fVec80SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec80SEState; // Single Delay
	float 	fVec83SE[8192]; // Ring Delay
	// Recursion delay fVec81SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec81SEState; // Single Delay
	// Recursion delay fVec86SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec86SEState; // Single Delay
	float 	fVec89SE[8192]; // Ring Delay
	// Recursion delay fVec87SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec87SEState; // Single Delay
	// Recursion delay fVec92SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec92SEState; // Single Delay
	float 	fVec95SE[8192]; // Ring Delay
	// Recursion delay fVec93SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec93SEState; // Single Delay
	// Recursion delay fVec98SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec98SEState; // Single Delay
	float 	fVec101SE[8192]; // Ring Delay
	// Recursion delay fVec99SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec99SEState; // Single Delay
	// Recursion delay fVec104SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec104SEState; // Single Delay
	float 	fVec107SE[8192]; // Ring Delay
	// Recursion delay fVec105SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec105SEState; // Single Delay
	// Recursion delay fVec110SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec110SEState; // Single Delay
	float 	fVec113SE[8192]; // Ring Delay
	// Recursion delay fVec111SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec111SEState; // Single Delay
	// Recursion delay fVec116SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec116SEState; // Single Delay
	float 	fVec119SE[8192]; // Ring Delay
	// Recursion delay fVec117SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec117SEState; // Single Delay
	float 	fVec123SE[2048]; // Ring Delay
	// Recursion delay fVec122SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec122SEState; // Single Delay
	float 	fVec126SEState; // Single Delay
	// Recursion delay fRec40SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec130SE[2048]; // Ring Delay
	// Recursion delay fVec129SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec129SEState; // Single Delay
	float 	fVec133SEState; // Single Delay
	// Recursion delay fRec42SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec137SE[2048]; // Ring Delay
	// Recursion delay fVec136SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec136SEState; // Single Delay
	float 	fVec140SEState; // Single Delay
	// Recursion delay fRec44SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec144SE[2048]; // Ring Delay
	// Recursion delay fVec143SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec143SEState; // Single Delay
	float 	fVec147SEState; // Single Delay
	// Recursion delay fRec46SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fRec47SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	int fSampleRate;

  public:
	virtual void metadata(Meta* m) { 
		m->declare("author", "RM");
		m->declare("compile_options", "-lang ocpp -ct 1 -es 1 -mcl 4 -mcd 9 -mfs 1024 -irt 4 -fls 4 -udd 1 -mdd 1024 -mdy 33 -ss 0 -single -ftz 0");
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
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
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
		fConst0KI = std::min(1.92e+05f, std::max(1.0f, float(fSampleRate))); // step: 15
		fConst1KI = (1.764e+04f / fConst0KI); // step: 16
		fConst2KI = (12348.0f / fConst0KI); // step: 29
		IOTA0 = 0; // init IOTA for clock: 0x154e12600
		iConst3KI = int((0.025306122f * fConst0KI)); // step: 45
		iConst4KI = int((0.026938776f * fConst0KI)); // step: 63
		iConst5KI = int((0.028956916f * fConst0KI)); // step: 82
		iConst6KI = int((0.030748298f * fConst0KI)); // step: 101
		iConst7KI = int((0.0322449f * fConst0KI)); // step: 120
		iConst8KI = int((0.033809524f * fConst0KI)); // step: 139
		iConst9KI = int((0.035306122f * fConst0KI)); // step: 158
		iConst10KI = int((0.036666665f * fConst0KI)); // step: 177
		iConst11KI = int((0.0126077095f * fConst0KI)); // step: 191
		iConst12KI = std::min(1024, std::max(0, (iConst11KI + -1))); // step: 194
		iConst13KI = int((0.01f * fConst0KI)); // step: 213
		iConst14KI = std::min(1024, std::max(0, (iConst13KI + -1))); // step: 216
		iConst15KI = int((0.0077324263f * fConst0KI)); // step: 234
		iConst16KI = std::min(1024, std::max(0, (iConst15KI + -1))); // step: 237
		iConst17KI = int((0.0051020407f * fConst0KI)); // step: 255
		iConst18KI = std::min(1024, std::max(0, (iConst17KI + -1))); // step: 258
		fConst19KI = (0.0010430838f * fConst0KI); // step: 277
	}
	virtual void instanceResetUserInterface() {
		fslider0 = 0.5f;
		fslider1 = 0.5f;
		fslider2 = 0.3333f;
		fslider3 = 0.5f;
	}
	virtual void instanceClear() {
		fVec0SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec3SE[i] = 0; }
		fVec3SE[0] = -1;  // detect unintialized
		fVec1SEState = 0;
		fVec6SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec9SE[i] = 0; }
		fVec9SE[0] = -1;  // detect unintialized
		fVec7SEState = 0;
		fVec12SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec15SE[i] = 0; }
		fVec15SE[0] = -1;  // detect unintialized
		fVec13SEState = 0;
		fVec18SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec21SE[i] = 0; }
		fVec21SE[0] = -1;  // detect unintialized
		fVec19SEState = 0;
		fVec24SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec27SE[i] = 0; }
		fVec27SE[0] = -1;  // detect unintialized
		fVec25SEState = 0;
		fVec30SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec33SE[i] = 0; }
		fVec33SE[0] = -1;  // detect unintialized
		fVec31SEState = 0;
		fVec36SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec39SE[i] = 0; }
		fVec39SE[0] = -1;  // detect unintialized
		fVec37SEState = 0;
		fVec42SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec45SE[i] = 0; }
		fVec45SE[0] = -1;  // detect unintialized
		fVec43SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec49SE[i] = 0; }
		fVec49SE[0] = -1;  // detect unintialized
		fVec48SEState = 0;
		fVec52SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec56SE[i] = 0; }
		fVec56SE[0] = -1;  // detect unintialized
		fVec55SEState = 0;
		fVec59SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec63SE[i] = 0; }
		fVec63SE[0] = -1;  // detect unintialized
		fVec62SEState = 0;
		fVec66SEState = 0;
		for (int i = 1; i < 1024; i++) { fVec70SE[i] = 0; }
		fVec70SE[0] = -1;  // detect unintialized
		fVec69SEState = 0;
		fVec73SEState = 0;
		fVec74SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec77SE[i] = 0; }
		fVec77SE[0] = -1;  // detect unintialized
		fVec75SEState = 0;
		fVec80SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec83SE[i] = 0; }
		fVec83SE[0] = -1;  // detect unintialized
		fVec81SEState = 0;
		fVec86SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec89SE[i] = 0; }
		fVec89SE[0] = -1;  // detect unintialized
		fVec87SEState = 0;
		fVec92SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec95SE[i] = 0; }
		fVec95SE[0] = -1;  // detect unintialized
		fVec93SEState = 0;
		fVec98SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec101SE[i] = 0; }
		fVec101SE[0] = -1;  // detect unintialized
		fVec99SEState = 0;
		fVec104SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec107SE[i] = 0; }
		fVec107SE[0] = -1;  // detect unintialized
		fVec105SEState = 0;
		fVec110SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec113SE[i] = 0; }
		fVec113SE[0] = -1;  // detect unintialized
		fVec111SEState = 0;
		fVec116SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec119SE[i] = 0; }
		fVec119SE[0] = -1;  // detect unintialized
		fVec117SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec123SE[i] = 0; }
		fVec123SE[0] = -1;  // detect unintialized
		fVec122SEState = 0;
		fVec126SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec130SE[i] = 0; }
		fVec130SE[0] = -1;  // detect unintialized
		fVec129SEState = 0;
		fVec133SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec137SE[i] = 0; }
		fVec137SE[0] = -1;  // detect unintialized
		fVec136SEState = 0;
		fVec140SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec144SE[i] = 0; }
		fVec144SE[0] = -1;  // detect unintialized
		fVec143SEState = 0;
		fVec147SEState = 0;
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
		float 	fSlow0BE = (fConst1KI * float(fslider0)); // Zone 2, step: 17
		float 	fSlow1BE = (1.0f - fSlow0BE); // Zone 2, step: 21
		float 	fVec0SE[2];
		float 	fSlow2BE = ((fConst2KI * float(fslider1)) + 0.7f); // Zone 2, step: 31
		float 	fSlow3BE = float(fslider2); // Zone 2, step: 35
		float 	fSlow4BE = (0.1f * fSlow3BE); // Zone 2, step: 36
		float 	fTemp0SE; // step: 37
		float 	fTemp1SE; // step: 38
		float 	fTemp2SE; // step: 40
		float 	fVec1SE[2];
		float 	fVec6SE[2];
		float 	fVec7SE[2];
		float 	fVec12SE[2];
		float 	fVec13SE[2];
		float 	fVec18SE[2];
		float 	fVec19SE[2];
		float 	fVec24SE[2];
		float 	fVec25SE[2];
		float 	fVec30SE[2];
		float 	fVec31SE[2];
		float 	fVec36SE[2];
		float 	fVec37SE[2];
		float 	fVec42SE[2];
		float 	fVec43SE[2];
		float 	fTemp3SE; // step: 185
		float 	fVec48SE[2];
		float 	fVec52SE[2];
		float 	fTemp4SE; // step: 209
		float 	fVec55SE[2];
		float 	fVec59SE[2];
		float 	fTemp5SE; // step: 230
		float 	fVec62SE[2];
		float 	fVec66SE[2];
		float 	fTemp6SE; // step: 251
		float 	fVec69SE[2];
		float 	fVec73SE[2];
		float 	fVec74SE[2];
		int 	iSlow5BE = int((fConst19KI * float(fslider3))); // Zone 2, step: 279
		int 	iSlow6BE = (iConst3KI + iSlow5BE); // Zone 2, step: 280
		float 	fVec75SE[2];
		float 	fVec80SE[2];
		int 	iSlow7BE = (iConst4KI + iSlow5BE); // Zone 2, step: 296
		float 	fVec81SE[2];
		float 	fVec86SE[2];
		int 	iSlow8BE = (iConst5KI + iSlow5BE); // Zone 2, step: 313
		float 	fVec87SE[2];
		float 	fVec92SE[2];
		int 	iSlow9BE = (iConst6KI + iSlow5BE); // Zone 2, step: 330
		float 	fVec93SE[2];
		float 	fVec98SE[2];
		int 	iSlow10BE = (iConst7KI + iSlow5BE); // Zone 2, step: 347
		float 	fVec99SE[2];
		float 	fVec104SE[2];
		int 	iSlow11BE = (iConst8KI + iSlow5BE); // Zone 2, step: 364
		float 	fVec105SE[2];
		float 	fVec110SE[2];
		int 	iSlow12BE = (iConst9KI + iSlow5BE); // Zone 2, step: 381
		float 	fVec111SE[2];
		float 	fVec116SE[2];
		int 	iSlow13BE = (iConst10KI + iSlow5BE); // Zone 2, step: 398
		float 	fVec117SE[2];
		float 	fTemp7SE; // step: 406
		int 	iSlow14BE = (iSlow5BE + -1); // Zone 2, step: 408
		int 	iSlow15BE = std::min(1024, std::max(0, (iConst11KI + iSlow14BE))); // Zone 2, step: 411
		float 	fVec122SE[2];
		float 	fVec126SE[2];
		float 	fTemp8SE; // step: 425
		int 	iSlow16BE = std::min(1024, std::max(0, (iConst13KI + iSlow14BE))); // Zone 2, step: 429
		float 	fVec129SE[2];
		float 	fVec133SE[2];
		float 	fTemp9SE; // step: 443
		int 	iSlow17BE = std::min(1024, std::max(0, (iConst15KI + iSlow14BE))); // Zone 2, step: 447
		float 	fVec136SE[2];
		float 	fVec140SE[2];
		float 	fTemp10SE; // step: 461
		int 	iSlow18BE = std::min(1024, std::max(0, (iConst17KI + iSlow14BE))); // Zone 2, step: 465
		float 	fVec143SE[2];
		float 	fVec147SE[2];
		float 	fSlow19BE = (1.0f - fSlow3BE); // Zone 2, step: 476
		FAUSTFLOAT* input0 = input[0]; // Zone 3
		FAUSTFLOAT* input1 = input[1]; // Zone 3
		FAUSTFLOAT* output0 = output[0]; // Zone 3
		FAUSTFLOAT* output1 = output[1]; // Zone 3
		fVec0SE[1] = fVec0SEState;
		fVec1SE[1] = fVec1SEState;
		fVec6SE[1] = fVec6SEState;
		fVec7SE[1] = fVec7SEState;
		fVec12SE[1] = fVec12SEState;
		fVec13SE[1] = fVec13SEState;
		fVec18SE[1] = fVec18SEState;
		fVec19SE[1] = fVec19SEState;
		fVec24SE[1] = fVec24SEState;
		fVec25SE[1] = fVec25SEState;
		fVec30SE[1] = fVec30SEState;
		fVec31SE[1] = fVec31SEState;
		fVec36SE[1] = fVec36SEState;
		fVec37SE[1] = fVec37SEState;
		fVec42SE[1] = fVec42SEState;
		fVec43SE[1] = fVec43SEState;
		fVec48SE[1] = fVec48SEState;
		fVec52SE[1] = fVec52SEState;
		fVec55SE[1] = fVec55SEState;
		fVec59SE[1] = fVec59SEState;
		fVec62SE[1] = fVec62SEState;
		fVec66SE[1] = fVec66SEState;
		fVec69SE[1] = fVec69SEState;
		fVec73SE[1] = fVec73SEState;
		fVec74SE[1] = fVec74SEState;
		fVec75SE[1] = fVec75SEState;
		fVec80SE[1] = fVec80SEState;
		fVec81SE[1] = fVec81SEState;
		fVec86SE[1] = fVec86SEState;
		fVec87SE[1] = fVec87SEState;
		fVec92SE[1] = fVec92SEState;
		fVec93SE[1] = fVec93SEState;
		fVec98SE[1] = fVec98SEState;
		fVec99SE[1] = fVec99SEState;
		fVec104SE[1] = fVec104SEState;
		fVec105SE[1] = fVec105SEState;
		fVec110SE[1] = fVec110SEState;
		fVec111SE[1] = fVec111SEState;
		fVec116SE[1] = fVec116SEState;
		fVec117SE[1] = fVec117SEState;
		fVec122SE[1] = fVec122SEState;
		fVec126SE[1] = fVec126SEState;
		fVec129SE[1] = fVec129SEState;
		fVec133SE[1] = fVec133SEState;
		fVec136SE[1] = fVec136SEState;
		fVec140SE[1] = fVec140SEState;
		fVec143SE[1] = fVec143SEState;
		fVec147SE[1] = fVec147SEState;
		for (int i=0; i<count; i++) {
			fVec0SE[0] = ((fSlow0BE * fVec0SE[1]) + (fSlow1BE * fVec1SE[1]));
			fTemp0SE = (float)input0[i]; // step: 37
			fTemp1SE = (float)input1[i]; // step: 38
			fTemp2SE = (fSlow4BE * (fTemp0SE + fTemp1SE)); // step: 40
			fVec3SE[IOTA0&8191] = ((fSlow2BE * fVec0SE[0]) + fTemp2SE);
			fVec1SE[0] = fVec3SE[(IOTA0-iConst3KI)&8191];
			fVec6SE[0] = ((fSlow0BE * fVec6SE[1]) + (fSlow1BE * fVec7SE[1]));
			fVec9SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec6SE[0]));
			fVec7SE[0] = fVec9SE[(IOTA0-iConst4KI)&8191];
			fVec12SE[0] = ((fSlow0BE * fVec12SE[1]) + (fSlow1BE * fVec13SE[1]));
			fVec15SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec12SE[0]));
			fVec13SE[0] = fVec15SE[(IOTA0-iConst5KI)&8191];
			fVec18SE[0] = ((fSlow0BE * fVec18SE[1]) + (fSlow1BE * fVec19SE[1]));
			fVec21SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec18SE[0]));
			fVec19SE[0] = fVec21SE[(IOTA0-iConst6KI)&8191];
			fVec24SE[0] = ((fSlow0BE * fVec24SE[1]) + (fSlow1BE * fVec25SE[1]));
			fVec27SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec24SE[0]));
			fVec25SE[0] = fVec27SE[(IOTA0-iConst7KI)&8191];
			fVec30SE[0] = ((fSlow0BE * fVec30SE[1]) + (fSlow1BE * fVec31SE[1]));
			fVec33SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec30SE[0]));
			fVec31SE[0] = fVec33SE[(IOTA0-iConst8KI)&8191];
			fVec36SE[0] = ((fSlow0BE * fVec36SE[1]) + (fSlow1BE * fVec37SE[1]));
			fVec39SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec36SE[0]));
			fVec37SE[0] = fVec39SE[(IOTA0-iConst9KI)&8191];
			fVec42SE[0] = ((fSlow0BE * fVec42SE[1]) + (fSlow1BE * fVec43SE[1]));
			fVec45SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec42SE[0]));
			fVec43SE[0] = fVec45SE[(IOTA0-iConst10KI)&8191];
			fTemp3SE = ((((((((fVec1SE[0] + fVec7SE[0]) + fVec13SE[0]) + fVec19SE[0]) + fVec25SE[0]) + fVec31SE[0]) + fVec37SE[0]) + fVec43SE[0]) + (0.5f * fVec48SE[1])); // step: 185
			fVec49SE[IOTA0&2047] = fTemp3SE;
			fVec48SE[0] = fVec49SE[(IOTA0-iConst12KI)&2047];
			fVec52SE[0] = fVec48SE[0];
			float 	fRec17SE = -(0.5f * fTemp3SE); // Zero delay
			fTemp4SE = (fVec52SE[1] + (fRec17SE + (0.5f * fVec55SE[1]))); // step: 209
			fVec56SE[IOTA0&2047] = fTemp4SE;
			fVec55SE[0] = fVec56SE[(IOTA0-iConst14KI)&2047];
			fVec59SE[0] = fVec55SE[0];
			float 	fRec19SE = -(0.5f * fTemp4SE); // Zero delay
			fTemp5SE = (fVec59SE[1] + (fRec19SE + (0.5f * fVec62SE[1]))); // step: 230
			fVec63SE[IOTA0&2047] = fTemp5SE;
			fVec62SE[0] = fVec63SE[(IOTA0-iConst16KI)&2047];
			fVec66SE[0] = fVec62SE[0];
			float 	fRec21SE = -(0.5f * fTemp5SE); // Zero delay
			fTemp6SE = (fVec66SE[1] + (fRec21SE + (0.5f * fVec69SE[1]))); // step: 251
			fVec70SE[IOTA0&1023] = fTemp6SE;
			fVec69SE[0] = fVec70SE[(IOTA0-iConst18KI)&1023];
			fVec73SE[0] = fVec69SE[0];
			fVec74SE[0] = ((fSlow0BE * fVec74SE[1]) + (fSlow1BE * fVec75SE[1]));
			fVec77SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec74SE[0]));
			fVec75SE[0] = fVec77SE[(IOTA0-iSlow6BE)&8191];
			fVec80SE[0] = ((fSlow0BE * fVec80SE[1]) + (fSlow1BE * fVec81SE[1]));
			fVec83SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec80SE[0]));
			fVec81SE[0] = fVec83SE[(IOTA0-iSlow7BE)&8191];
			fVec86SE[0] = ((fSlow0BE * fVec86SE[1]) + (fSlow1BE * fVec87SE[1]));
			fVec89SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec86SE[0]));
			fVec87SE[0] = fVec89SE[(IOTA0-iSlow8BE)&8191];
			fVec92SE[0] = ((fSlow0BE * fVec92SE[1]) + (fSlow1BE * fVec93SE[1]));
			fVec95SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec92SE[0]));
			fVec93SE[0] = fVec95SE[(IOTA0-iSlow9BE)&8191];
			fVec98SE[0] = ((fSlow0BE * fVec98SE[1]) + (fSlow1BE * fVec99SE[1]));
			fVec101SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec98SE[0]));
			fVec99SE[0] = fVec101SE[(IOTA0-iSlow10BE)&8191];
			fVec104SE[0] = ((fSlow0BE * fVec104SE[1]) + (fSlow1BE * fVec105SE[1]));
			fVec107SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec104SE[0]));
			fVec105SE[0] = fVec107SE[(IOTA0-iSlow11BE)&8191];
			fVec110SE[0] = ((fSlow0BE * fVec110SE[1]) + (fSlow1BE * fVec111SE[1]));
			fVec113SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec110SE[0]));
			fVec111SE[0] = fVec113SE[(IOTA0-iSlow12BE)&8191];
			fVec116SE[0] = ((fSlow0BE * fVec116SE[1]) + (fSlow1BE * fVec117SE[1]));
			fVec119SE[IOTA0&8191] = (fTemp2SE + (fSlow2BE * fVec116SE[0]));
			fVec117SE[0] = fVec119SE[(IOTA0-iSlow13BE)&8191];
			fTemp7SE = ((((((((fVec75SE[0] + fVec81SE[0]) + fVec87SE[0]) + fVec93SE[0]) + fVec99SE[0]) + fVec105SE[0]) + fVec111SE[0]) + fVec117SE[0]) + (0.5f * fVec122SE[1])); // step: 406
			fVec123SE[IOTA0&2047] = fTemp7SE;
			fVec122SE[0] = fVec123SE[(IOTA0-iSlow15BE)&2047];
			fVec126SE[0] = fVec122SE[0];
			float 	fRec40SE = -(0.5f * fTemp7SE); // Zero delay
			fTemp8SE = (fVec126SE[1] + (fRec40SE + (0.5f * fVec129SE[1]))); // step: 425
			fVec130SE[IOTA0&2047] = fTemp8SE;
			fVec129SE[0] = fVec130SE[(IOTA0-iSlow16BE)&2047];
			fVec133SE[0] = fVec129SE[0];
			float 	fRec42SE = -(0.5f * fTemp8SE); // Zero delay
			fTemp9SE = (fVec133SE[1] + (fRec42SE + (0.5f * fVec136SE[1]))); // step: 443
			fVec137SE[IOTA0&2047] = fTemp9SE;
			fVec136SE[0] = fVec137SE[(IOTA0-iSlow17BE)&2047];
			fVec140SE[0] = fVec136SE[0];
			float 	fRec44SE = -(0.5f * fTemp9SE); // Zero delay
			fTemp10SE = (fVec140SE[1] + (fRec44SE + (0.5f * fVec143SE[1]))); // step: 461
			fVec144SE[IOTA0&2047] = fTemp10SE;
			fVec143SE[0] = fVec144SE[(IOTA0-iSlow18BE)&2047];
			fVec147SE[0] = fVec143SE[0];
			float 	fRec46SE = -(0.5f * fTemp6SE); // Zero delay
			float 	fRec47SE = -(0.5f * fTemp10SE); // Zero delay
			output0[i] = (FAUSTFLOAT)(((fRec46SE + fVec73SE[1]) + (fSlow19BE * fTemp0SE)));  // Zone Exec Code
			output1[i] = (FAUSTFLOAT)(((fSlow19BE * fTemp1SE) + (fRec47SE + fVec147SE[1])));  // Zone Exec Code
			// post processing
			fVec147SE[1] = fVec147SE[0];
			fVec143SE[1] = fVec143SE[0];
			fVec140SE[1] = fVec140SE[0];
			fVec136SE[1] = fVec136SE[0];
			fVec133SE[1] = fVec133SE[0];
			fVec129SE[1] = fVec129SE[0];
			fVec126SE[1] = fVec126SE[0];
			fVec122SE[1] = fVec122SE[0];
			fVec117SE[1] = fVec117SE[0];
			fVec116SE[1] = fVec116SE[0];
			fVec111SE[1] = fVec111SE[0];
			fVec110SE[1] = fVec110SE[0];
			fVec105SE[1] = fVec105SE[0];
			fVec104SE[1] = fVec104SE[0];
			fVec99SE[1] = fVec99SE[0];
			fVec98SE[1] = fVec98SE[0];
			fVec93SE[1] = fVec93SE[0];
			fVec92SE[1] = fVec92SE[0];
			fVec87SE[1] = fVec87SE[0];
			fVec86SE[1] = fVec86SE[0];
			fVec81SE[1] = fVec81SE[0];
			fVec80SE[1] = fVec80SE[0];
			fVec75SE[1] = fVec75SE[0];
			fVec74SE[1] = fVec74SE[0];
			fVec73SE[1] = fVec73SE[0];
			fVec69SE[1] = fVec69SE[0];
			fVec66SE[1] = fVec66SE[0];
			fVec62SE[1] = fVec62SE[0];
			fVec59SE[1] = fVec59SE[0];
			fVec55SE[1] = fVec55SE[0];
			fVec52SE[1] = fVec52SE[0];
			fVec48SE[1] = fVec48SE[0];
			fVec43SE[1] = fVec43SE[0];
			fVec42SE[1] = fVec42SE[0];
			fVec37SE[1] = fVec37SE[0];
			fVec36SE[1] = fVec36SE[0];
			fVec31SE[1] = fVec31SE[0];
			fVec30SE[1] = fVec30SE[0];
			fVec25SE[1] = fVec25SE[0];
			fVec24SE[1] = fVec24SE[0];
			fVec19SE[1] = fVec19SE[0];
			fVec18SE[1] = fVec18SE[0];
			fVec13SE[1] = fVec13SE[0];
			fVec12SE[1] = fVec12SE[0];
			fVec7SE[1] = fVec7SE[0];
			fVec6SE[1] = fVec6SE[0];
			fVec1SE[1] = fVec1SE[0];
			++IOTA0; // inc IOTA for clock: 0x154e12600
			fVec0SE[1] = fVec0SE[0];
		}
		fVec0SEState = fVec0SE[1];
		fVec1SEState = fVec1SE[1];
		fVec6SEState = fVec6SE[1];
		fVec7SEState = fVec7SE[1];
		fVec12SEState = fVec12SE[1];
		fVec13SEState = fVec13SE[1];
		fVec18SEState = fVec18SE[1];
		fVec19SEState = fVec19SE[1];
		fVec24SEState = fVec24SE[1];
		fVec25SEState = fVec25SE[1];
		fVec30SEState = fVec30SE[1];
		fVec31SEState = fVec31SE[1];
		fVec36SEState = fVec36SE[1];
		fVec37SEState = fVec37SE[1];
		fVec42SEState = fVec42SE[1];
		fVec43SEState = fVec43SE[1];
		fVec48SEState = fVec48SE[1];
		fVec52SEState = fVec52SE[1];
		fVec55SEState = fVec55SE[1];
		fVec59SEState = fVec59SE[1];
		fVec62SEState = fVec62SE[1];
		fVec66SEState = fVec66SE[1];
		fVec69SEState = fVec69SE[1];
		fVec73SEState = fVec73SE[1];
		fVec74SEState = fVec74SE[1];
		fVec75SEState = fVec75SE[1];
		fVec80SEState = fVec80SE[1];
		fVec81SEState = fVec81SE[1];
		fVec86SEState = fVec86SE[1];
		fVec87SEState = fVec87SE[1];
		fVec92SEState = fVec92SE[1];
		fVec93SEState = fVec93SE[1];
		fVec98SEState = fVec98SE[1];
		fVec99SEState = fVec99SE[1];
		fVec104SEState = fVec104SE[1];
		fVec105SEState = fVec105SE[1];
		fVec110SEState = fVec110SE[1];
		fVec111SEState = fVec111SE[1];
		fVec116SEState = fVec116SE[1];
		fVec117SEState = fVec117SE[1];
		fVec122SEState = fVec122SE[1];
		fVec126SEState = fVec126SE[1];
		fVec129SEState = fVec129SE[1];
		fVec133SEState = fVec133SE[1];
		fVec136SEState = fVec136SE[1];
		fVec140SEState = fVec140SE[1];
		fVec143SEState = fVec143SE[1];
		fVec147SEState = fVec147SE[1];
	}
};


