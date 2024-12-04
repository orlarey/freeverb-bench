//----------------------------------------------------------
// author: "RM"
// name: "freeverb"
// version: "0.0"
//
// Code generated with Faust 2.75.9 (https://faust.grame.fr)
// Compiler options: -lang ocpp -ct 1 -es 1 -mcl 4 -mcd 9 -mfs 1024 -irt 4 -fls 4 -udd 1 -mdd 1024 -mdy 33 -ss 1 -single -ftz 0 
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
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT 	fslider3;
	float 	fConst0KI; // step: 129
	float 	fConst1KI; // step: 141
	float 	fConst2KI; // step: 142
	float 	fConst3KI; // step: 155
	int 	iConst4KI; // step: 158
	int 	iConst5KI; // step: 159
	int 	iConst6KI; // step: 160
	int 	iConst7KI; // step: 161
	int 	iConst8KI; // step: 162
	int 	iConst9KI; // step: 163
	int 	iConst10KI; // step: 164
	int 	iConst11KI; // step: 165
	int 	iConst12KI; // step: 166
	int 	iConst13KI; // step: 167
	int 	iConst14KI; // step: 168
	int 	iConst15KI; // step: 169
	int 	iConst16KI; // step: 231
	int 	iConst17KI; // step: 232
	int 	iConst18KI; // step: 233
	int 	iConst19KI; // step: 234
	// Recursion delay fVec4SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec4SEState; // Single Delay
	// Recursion delay fVec6SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec6SEState; // Single Delay
	// Recursion delay fVec8SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec8SEState; // Single Delay
	// Recursion delay fVec10SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec10SEState; // Single Delay
	// Recursion delay fVec12SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec12SEState; // Single Delay
	// Recursion delay fVec14SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec14SEState; // Single Delay
	// Recursion delay fVec16SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec16SEState; // Single Delay
	// Recursion delay fVec18SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec18SEState; // Single Delay
	// Recursion delay fVec28SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec28SEState; // Single Delay
	// Recursion delay fVec30SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec30SEState; // Single Delay
	// Recursion delay fVec32SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec32SEState; // Single Delay
	// Recursion delay fVec34SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec34SEState; // Single Delay
	// Recursion delay fVec36SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec36SEState; // Single Delay
	// Recursion delay fVec38SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec38SEState; // Single Delay
	// Recursion delay fVec40SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec40SEState; // Single Delay
	// Recursion delay fVec42SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec42SEState; // Single Delay
	int 	IOTA0; // IOTA for clock: 0x12be12600
	float 	fVec64SE[8192]; // Ring Delay
	float 	fVec65SE[8192]; // Ring Delay
	float 	fVec66SE[8192]; // Ring Delay
	float 	fVec67SE[8192]; // Ring Delay
	float 	fVec68SE[8192]; // Ring Delay
	float 	fVec69SE[8192]; // Ring Delay
	float 	fVec70SE[8192]; // Ring Delay
	float 	fVec71SE[8192]; // Ring Delay
	float 	fVec72SE[8192]; // Ring Delay
	float 	fVec73SE[8192]; // Ring Delay
	float 	fVec74SE[8192]; // Ring Delay
	float 	fVec75SE[8192]; // Ring Delay
	float 	fVec76SE[8192]; // Ring Delay
	float 	fVec77SE[8192]; // Ring Delay
	float 	fVec78SE[8192]; // Ring Delay
	float 	fVec79SE[8192]; // Ring Delay
	// Recursion delay fVec5SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec5SEState; // Single Delay
	// Recursion delay fVec7SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec7SEState; // Single Delay
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
	// Recursion delay fVec17SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec17SEState; // Single Delay
	// Recursion delay fVec19SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec19SEState; // Single Delay
	// Recursion delay fVec29SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec29SEState; // Single Delay
	// Recursion delay fVec31SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec31SEState; // Single Delay
	// Recursion delay fVec33SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec33SEState; // Single Delay
	// Recursion delay fVec35SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec35SEState; // Single Delay
	// Recursion delay fVec37SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec37SEState; // Single Delay
	// Recursion delay fVec39SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec39SEState; // Single Delay
	// Recursion delay fVec41SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec41SEState; // Single Delay
	// Recursion delay fVec43SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec43SEState; // Single Delay
	float 	fVec112SE[2048]; // Ring Delay
	float 	fVec113SE[2048]; // Ring Delay
	// Recursion delay fVec3SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec3SEState; // Single Delay
	// Recursion delay fRec33SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fVec27SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec27SEState; // Single Delay
	// Recursion delay fRec35SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec20SEState; // Single Delay
	float 	fVec44SEState; // Single Delay
	float 	fVec122SE[2048]; // Ring Delay
	float 	fVec123SE[2048]; // Ring Delay
	// Recursion delay fVec2SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec2SEState; // Single Delay
	// Recursion delay fRec37SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fVec26SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec26SEState; // Single Delay
	// Recursion delay fRec39SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec21SEState; // Single Delay
	float 	fVec45SEState; // Single Delay
	float 	fVec132SE[2048]; // Ring Delay
	float 	fVec133SE[2048]; // Ring Delay
	// Recursion delay fVec1SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec1SEState; // Single Delay
	// Recursion delay fRec41SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fVec25SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec25SEState; // Single Delay
	// Recursion delay fRec43SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec22SEState; // Single Delay
	float 	fVec46SEState; // Single Delay
	float 	fVec142SE[1024]; // Ring Delay
	float 	fVec143SE[2048]; // Ring Delay
	// Recursion delay fVec0SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec0SEState; // Single Delay
	// Recursion delay fRec45SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fVec24SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec24SEState; // Single Delay
	// Recursion delay fRec47SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec23SEState; // Single Delay
	float 	fVec47SEState; // Single Delay
	int fSampleRate;

  public:
	virtual void metadata(Meta* m) { 
		m->declare("author", "RM");
		m->declare("compile_options", "-lang ocpp -ct 1 -es 1 -mcl 4 -mcd 9 -mfs 1024 -irt 4 -fls 4 -udd 1 -mdd 1024 -mdy 33 -ss 1 -single -ftz 0");
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
		fConst0KI = std::min(1.92e+05f, std::max(1.0f, float(fSampleRate))); // step: 129
		fConst1KI = (1.764e+04f / fConst0KI); // step: 141
		fConst2KI = (12348.0f / fConst0KI); // step: 142
		fConst3KI = (0.0010430838f * fConst0KI); // step: 155
		iConst4KI = int((0.025306122f * fConst0KI)); // step: 158
		iConst5KI = int((0.026938776f * fConst0KI)); // step: 159
		iConst6KI = int((0.028956916f * fConst0KI)); // step: 160
		iConst7KI = int((0.030748298f * fConst0KI)); // step: 161
		iConst8KI = int((0.0322449f * fConst0KI)); // step: 162
		iConst9KI = int((0.033809524f * fConst0KI)); // step: 163
		iConst10KI = int((0.035306122f * fConst0KI)); // step: 164
		iConst11KI = int((0.036666665f * fConst0KI)); // step: 165
		iConst12KI = int((0.0126077095f * fConst0KI)); // step: 166
		iConst13KI = int((0.01f * fConst0KI)); // step: 167
		iConst14KI = int((0.0077324263f * fConst0KI)); // step: 168
		iConst15KI = int((0.0051020407f * fConst0KI)); // step: 169
		iConst16KI = std::min(1024, std::max(0, (iConst12KI + -1))); // step: 231
		iConst17KI = std::min(1024, std::max(0, (iConst13KI + -1))); // step: 232
		iConst18KI = std::min(1024, std::max(0, (iConst14KI + -1))); // step: 233
		iConst19KI = std::min(1024, std::max(0, (iConst15KI + -1))); // step: 234
		IOTA0 = 0; // init IOTA for clock: 0x12be12600
	}
	virtual void instanceResetUserInterface() {
		fslider0 = 0.5f;
		fslider1 = 0.5f;
		fslider2 = 0.5f;
		fslider3 = 0.3333f;
	}
	virtual void instanceClear() {
		fVec4SEState = 0;
		fVec6SEState = 0;
		fVec8SEState = 0;
		fVec10SEState = 0;
		fVec12SEState = 0;
		fVec14SEState = 0;
		fVec16SEState = 0;
		fVec18SEState = 0;
		fVec28SEState = 0;
		fVec30SEState = 0;
		fVec32SEState = 0;
		fVec34SEState = 0;
		fVec36SEState = 0;
		fVec38SEState = 0;
		fVec40SEState = 0;
		fVec42SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec64SE[i] = 0; }
		fVec64SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec65SE[i] = 0; }
		fVec65SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec66SE[i] = 0; }
		fVec66SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec67SE[i] = 0; }
		fVec67SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec68SE[i] = 0; }
		fVec68SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec69SE[i] = 0; }
		fVec69SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec70SE[i] = 0; }
		fVec70SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec71SE[i] = 0; }
		fVec71SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec72SE[i] = 0; }
		fVec72SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec73SE[i] = 0; }
		fVec73SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec74SE[i] = 0; }
		fVec74SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec75SE[i] = 0; }
		fVec75SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec76SE[i] = 0; }
		fVec76SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec77SE[i] = 0; }
		fVec77SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec78SE[i] = 0; }
		fVec78SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 8192; i++) { fVec79SE[i] = 0; }
		fVec79SE[0] = -1;  // detect unintialized
		fVec5SEState = 0;
		fVec7SEState = 0;
		fVec9SEState = 0;
		fVec11SEState = 0;
		fVec13SEState = 0;
		fVec15SEState = 0;
		fVec17SEState = 0;
		fVec19SEState = 0;
		fVec29SEState = 0;
		fVec31SEState = 0;
		fVec33SEState = 0;
		fVec35SEState = 0;
		fVec37SEState = 0;
		fVec39SEState = 0;
		fVec41SEState = 0;
		fVec43SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec112SE[i] = 0; }
		fVec112SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec113SE[i] = 0; }
		fVec113SE[0] = -1;  // detect unintialized
		fVec3SEState = 0;
		fVec27SEState = 0;
		fVec20SEState = 0;
		fVec44SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec122SE[i] = 0; }
		fVec122SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec123SE[i] = 0; }
		fVec123SE[0] = -1;  // detect unintialized
		fVec2SEState = 0;
		fVec26SEState = 0;
		fVec21SEState = 0;
		fVec45SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec132SE[i] = 0; }
		fVec132SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec133SE[i] = 0; }
		fVec133SE[0] = -1;  // detect unintialized
		fVec1SEState = 0;
		fVec25SEState = 0;
		fVec22SEState = 0;
		fVec46SEState = 0;
		for (int i = 1; i < 1024; i++) { fVec142SE[i] = 0; }
		fVec142SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec143SE[i] = 0; }
		fVec143SE[0] = -1;  // detect unintialized
		fVec0SEState = 0;
		fVec24SEState = 0;
		fVec23SEState = 0;
		fVec47SEState = 0;
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
		ui_interface->declare(&fslider1, "0", "");
		ui_interface->declare(&fslider1, "style", "knob");
		ui_interface->declare(&fslider1, "tooltip", "Somehow control the         density of the reverb.");
		ui_interface->addVerticalSlider("Damp", &fslider1, 0.5f, 0.0f, 1.0f, 0.025f);
		ui_interface->declare(&fslider0, "1", "");
		ui_interface->declare(&fslider0, "style", "knob");
		ui_interface->declare(&fslider0, "tooltip", "The room size         between 0 and 1 with 1 for the largest room.");
		ui_interface->addVerticalSlider("RoomSize", &fslider0, 0.5f, 0.0f, 1.0f, 0.025f);
		ui_interface->declare(&fslider2, "2", "");
		ui_interface->declare(&fslider2, "style", "knob");
		ui_interface->declare(&fslider2, "tooltip", "Spatial         spread between 0 and 1 with 1 for maximum spread.");
		ui_interface->addVerticalSlider("Stereo Spread", &fslider2, 0.5f, 0.0f, 1.0f, 0.01f);
		ui_interface->closeBox();
		ui_interface->declare(&fslider3, "1", "");
		ui_interface->declare(&fslider3, "tooltip", "The amount of reverb applied to the signal         between 0 and 1 with 1 for the maximum amount of reverb.");
		ui_interface->addVerticalSlider("Wet", &fslider3, 0.3333f, 0.0f, 1.0f, 0.025f);
		ui_interface->closeBox();
	}
	virtual void compute (int count, FAUSTFLOAT** input, FAUSTFLOAT** output) {
		float 	fTemp0SE; // step: 30
		float 	fTemp1SE; // step: 31
		float 	fSlow0BE = float(fslider3); // Zone 2, step: 35
		float 	fSlow1BE = (1.0f - fSlow0BE); // Zone 2, step: 87
		float 	fSlow2BE = (0.1f * fSlow0BE); // Zone 2, step: 94
		float 	fTemp2SE; // step: 134
		float 	fSlow3BE = (fConst1KI * float(fslider1)); // Zone 2, step: 156
		float 	fSlow4BE = (1.0f - fSlow3BE); // Zone 2, step: 172
		float 	fSlow5BE = ((fConst2KI * float(fslider0)) + 0.7f); // Zone 2, step: 173
		int 	iSlow6BE = int((fConst3KI * float(fslider2))); // Zone 2, step: 186
		int 	iSlow7BE = (iConst4KI + iSlow6BE); // Zone 2, step: 207
		int 	iSlow8BE = (iConst5KI + iSlow6BE); // Zone 2, step: 209
		int 	iSlow9BE = (iConst6KI + iSlow6BE); // Zone 2, step: 211
		int 	iSlow10BE = (iConst7KI + iSlow6BE); // Zone 2, step: 213
		int 	iSlow11BE = (iConst8KI + iSlow6BE); // Zone 2, step: 215
		int 	iSlow12BE = (iConst9KI + iSlow6BE); // Zone 2, step: 217
		int 	iSlow13BE = (iConst10KI + iSlow6BE); // Zone 2, step: 219
		int 	iSlow14BE = (iConst11KI + iSlow6BE); // Zone 2, step: 221
		int 	iSlow15BE = (iSlow6BE + -1); // Zone 2, step: 222
		float 	fVec4SE[2];
		float 	fVec6SE[2];
		float 	fVec8SE[2];
		float 	fVec10SE[2];
		float 	fVec12SE[2];
		float 	fVec14SE[2];
		float 	fVec16SE[2];
		float 	fVec18SE[2];
		float 	fVec28SE[2];
		float 	fVec30SE[2];
		float 	fVec32SE[2];
		float 	fVec34SE[2];
		float 	fVec36SE[2];
		float 	fVec38SE[2];
		float 	fVec40SE[2];
		float 	fVec42SE[2];
		int 	iSlow16BE = std::min(1024, std::max(0, (iConst12KI + iSlow15BE))); // Zone 2, step: 283
		int 	iSlow17BE = std::min(1024, std::max(0, (iConst13KI + iSlow15BE))); // Zone 2, step: 284
		int 	iSlow18BE = std::min(1024, std::max(0, (iConst14KI + iSlow15BE))); // Zone 2, step: 285
		int 	iSlow19BE = std::min(1024, std::max(0, (iConst15KI + iSlow15BE))); // Zone 2, step: 286
		float 	fVec5SE[2];
		float 	fVec7SE[2];
		float 	fVec9SE[2];
		float 	fVec11SE[2];
		float 	fVec13SE[2];
		float 	fVec15SE[2];
		float 	fVec17SE[2];
		float 	fVec19SE[2];
		float 	fVec29SE[2];
		float 	fVec31SE[2];
		float 	fVec33SE[2];
		float 	fVec35SE[2];
		float 	fVec37SE[2];
		float 	fVec39SE[2];
		float 	fVec41SE[2];
		float 	fVec43SE[2];
		float 	fTemp3SE; // step: 397
		float 	fTemp4SE; // step: 398
		float 	fVec3SE[2];
		float 	fVec27SE[2];
		float 	fVec20SE[2];
		float 	fVec44SE[2];
		float 	fTemp5SE; // step: 419
		float 	fTemp6SE; // step: 420
		float 	fVec2SE[2];
		float 	fVec26SE[2];
		float 	fVec21SE[2];
		float 	fVec45SE[2];
		float 	fTemp7SE; // step: 441
		float 	fTemp8SE; // step: 442
		float 	fVec1SE[2];
		float 	fVec25SE[2];
		float 	fVec22SE[2];
		float 	fVec46SE[2];
		float 	fTemp9SE; // step: 463
		float 	fTemp10SE; // step: 464
		float 	fVec0SE[2];
		float 	fVec24SE[2];
		float 	fVec23SE[2];
		float 	fVec47SE[2];
		FAUSTFLOAT* input0 = input[0]; // Zone 3
		FAUSTFLOAT* input1 = input[1]; // Zone 3
		FAUSTFLOAT* output0 = output[0]; // Zone 3
		FAUSTFLOAT* output1 = output[1]; // Zone 3
		fVec4SE[1] = fVec4SEState;
		fVec6SE[1] = fVec6SEState;
		fVec8SE[1] = fVec8SEState;
		fVec10SE[1] = fVec10SEState;
		fVec12SE[1] = fVec12SEState;
		fVec14SE[1] = fVec14SEState;
		fVec16SE[1] = fVec16SEState;
		fVec18SE[1] = fVec18SEState;
		fVec28SE[1] = fVec28SEState;
		fVec30SE[1] = fVec30SEState;
		fVec32SE[1] = fVec32SEState;
		fVec34SE[1] = fVec34SEState;
		fVec36SE[1] = fVec36SEState;
		fVec38SE[1] = fVec38SEState;
		fVec40SE[1] = fVec40SEState;
		fVec42SE[1] = fVec42SEState;
		fVec5SE[1] = fVec5SEState;
		fVec7SE[1] = fVec7SEState;
		fVec9SE[1] = fVec9SEState;
		fVec11SE[1] = fVec11SEState;
		fVec13SE[1] = fVec13SEState;
		fVec15SE[1] = fVec15SEState;
		fVec17SE[1] = fVec17SEState;
		fVec19SE[1] = fVec19SEState;
		fVec29SE[1] = fVec29SEState;
		fVec31SE[1] = fVec31SEState;
		fVec33SE[1] = fVec33SEState;
		fVec35SE[1] = fVec35SEState;
		fVec37SE[1] = fVec37SEState;
		fVec39SE[1] = fVec39SEState;
		fVec41SE[1] = fVec41SEState;
		fVec43SE[1] = fVec43SEState;
		fVec3SE[1] = fVec3SEState;
		fVec27SE[1] = fVec27SEState;
		fVec20SE[1] = fVec20SEState;
		fVec44SE[1] = fVec44SEState;
		fVec2SE[1] = fVec2SEState;
		fVec26SE[1] = fVec26SEState;
		fVec21SE[1] = fVec21SEState;
		fVec45SE[1] = fVec45SEState;
		fVec1SE[1] = fVec1SEState;
		fVec25SE[1] = fVec25SEState;
		fVec22SE[1] = fVec22SEState;
		fVec46SE[1] = fVec46SEState;
		fVec0SE[1] = fVec0SEState;
		fVec24SE[1] = fVec24SEState;
		fVec23SE[1] = fVec23SEState;
		fVec47SE[1] = fVec47SEState;
		for (int i=0; i<count; i++) {
			fTemp0SE = (float)input0[i]; // step: 30
			fTemp1SE = (float)input1[i]; // step: 31
			fTemp2SE = (fSlow2BE * (fTemp0SE + fTemp1SE)); // step: 134
			fVec4SE[0] = ((fSlow3BE * fVec4SE[1]) + (fSlow4BE * fVec5SE[1]));
			fVec6SE[0] = ((fSlow3BE * fVec6SE[1]) + (fSlow4BE * fVec7SE[1]));
			fVec8SE[0] = ((fSlow3BE * fVec8SE[1]) + (fSlow4BE * fVec9SE[1]));
			fVec10SE[0] = ((fSlow3BE * fVec10SE[1]) + (fSlow4BE * fVec11SE[1]));
			fVec12SE[0] = ((fSlow3BE * fVec12SE[1]) + (fSlow4BE * fVec13SE[1]));
			fVec14SE[0] = ((fSlow3BE * fVec14SE[1]) + (fSlow4BE * fVec15SE[1]));
			fVec16SE[0] = ((fSlow3BE * fVec16SE[1]) + (fSlow4BE * fVec17SE[1]));
			fVec18SE[0] = ((fSlow3BE * fVec18SE[1]) + (fSlow4BE * fVec19SE[1]));
			fVec28SE[0] = ((fSlow3BE * fVec28SE[1]) + (fSlow4BE * fVec29SE[1]));
			fVec30SE[0] = ((fSlow3BE * fVec30SE[1]) + (fSlow4BE * fVec31SE[1]));
			fVec32SE[0] = ((fSlow3BE * fVec32SE[1]) + (fSlow4BE * fVec33SE[1]));
			fVec34SE[0] = ((fSlow3BE * fVec34SE[1]) + (fSlow4BE * fVec35SE[1]));
			fVec36SE[0] = ((fSlow3BE * fVec36SE[1]) + (fSlow4BE * fVec37SE[1]));
			fVec38SE[0] = ((fSlow3BE * fVec38SE[1]) + (fSlow4BE * fVec39SE[1]));
			fVec40SE[0] = ((fSlow3BE * fVec40SE[1]) + (fSlow4BE * fVec41SE[1]));
			fVec42SE[0] = ((fSlow3BE * fVec42SE[1]) + (fSlow4BE * fVec43SE[1]));
			fVec64SE[IOTA0&8191] = ((fSlow5BE * fVec4SE[0]) + fTemp2SE);
			fVec65SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec6SE[0]));
			fVec66SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec8SE[0]));
			fVec67SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec10SE[0]));
			fVec68SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec12SE[0]));
			fVec69SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec14SE[0]));
			fVec70SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec16SE[0]));
			fVec71SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec18SE[0]));
			fVec72SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec28SE[0]));
			fVec73SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec30SE[0]));
			fVec74SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec32SE[0]));
			fVec75SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec34SE[0]));
			fVec76SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec36SE[0]));
			fVec77SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec38SE[0]));
			fVec78SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec40SE[0]));
			fVec79SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec42SE[0]));
			fVec5SE[0] = fVec64SE[(IOTA0-iConst4KI)&8191];
			fVec7SE[0] = fVec65SE[(IOTA0-iConst5KI)&8191];
			fVec9SE[0] = fVec66SE[(IOTA0-iConst6KI)&8191];
			fVec11SE[0] = fVec67SE[(IOTA0-iConst7KI)&8191];
			fVec13SE[0] = fVec68SE[(IOTA0-iConst8KI)&8191];
			fVec15SE[0] = fVec69SE[(IOTA0-iConst9KI)&8191];
			fVec17SE[0] = fVec70SE[(IOTA0-iConst10KI)&8191];
			fVec19SE[0] = fVec71SE[(IOTA0-iConst11KI)&8191];
			fVec29SE[0] = fVec72SE[(IOTA0-iSlow7BE)&8191];
			fVec31SE[0] = fVec73SE[(IOTA0-iSlow8BE)&8191];
			fVec33SE[0] = fVec74SE[(IOTA0-iSlow9BE)&8191];
			fVec35SE[0] = fVec75SE[(IOTA0-iSlow10BE)&8191];
			fVec37SE[0] = fVec76SE[(IOTA0-iSlow11BE)&8191];
			fVec39SE[0] = fVec77SE[(IOTA0-iSlow12BE)&8191];
			fVec41SE[0] = fVec78SE[(IOTA0-iSlow13BE)&8191];
			fVec43SE[0] = fVec79SE[(IOTA0-iSlow14BE)&8191];
			fTemp3SE = ((((((((fVec5SE[0] + fVec7SE[0]) + fVec9SE[0]) + fVec11SE[0]) + fVec13SE[0]) + fVec15SE[0]) + fVec17SE[0]) + fVec19SE[0]) + (0.5f * fVec3SE[1])); // step: 397
			fTemp4SE = ((((((((fVec29SE[0] + fVec31SE[0]) + fVec33SE[0]) + fVec35SE[0]) + fVec37SE[0]) + fVec39SE[0]) + fVec41SE[0]) + fVec43SE[0]) + (0.5f * fVec27SE[1])); // step: 398
			fVec112SE[IOTA0&2047] = fTemp3SE;
			fVec113SE[IOTA0&2047] = fTemp4SE;
			fVec3SE[0] = fVec112SE[(IOTA0-iConst16KI)&2047];
			float 	fRec33SE = -(0.5f * fTemp3SE); // Zero delay
			fVec27SE[0] = fVec113SE[(IOTA0-iSlow16BE)&2047];
			float 	fRec35SE = -(0.5f * fTemp4SE); // Zero delay
			fVec20SE[0] = fVec3SE[0];
			fVec44SE[0] = fVec27SE[0];
			fTemp5SE = (fVec20SE[1] + (fRec33SE + (0.5f * fVec2SE[1]))); // step: 419
			fTemp6SE = (fVec44SE[1] + (fRec35SE + (0.5f * fVec26SE[1]))); // step: 420
			fVec122SE[IOTA0&2047] = fTemp5SE;
			fVec123SE[IOTA0&2047] = fTemp6SE;
			fVec2SE[0] = fVec122SE[(IOTA0-iConst17KI)&2047];
			float 	fRec37SE = -(0.5f * fTemp5SE); // Zero delay
			fVec26SE[0] = fVec123SE[(IOTA0-iSlow17BE)&2047];
			float 	fRec39SE = -(0.5f * fTemp6SE); // Zero delay
			fVec21SE[0] = fVec2SE[0];
			fVec45SE[0] = fVec26SE[0];
			fTemp7SE = (fVec21SE[1] + (fRec37SE + (0.5f * fVec1SE[1]))); // step: 441
			fTemp8SE = (fVec45SE[1] + (fRec39SE + (0.5f * fVec25SE[1]))); // step: 442
			fVec132SE[IOTA0&2047] = fTemp7SE;
			fVec133SE[IOTA0&2047] = fTemp8SE;
			fVec1SE[0] = fVec132SE[(IOTA0-iConst18KI)&2047];
			float 	fRec41SE = -(0.5f * fTemp7SE); // Zero delay
			fVec25SE[0] = fVec133SE[(IOTA0-iSlow18BE)&2047];
			float 	fRec43SE = -(0.5f * fTemp8SE); // Zero delay
			fVec22SE[0] = fVec1SE[0];
			fVec46SE[0] = fVec25SE[0];
			fTemp9SE = (fVec22SE[1] + (fRec41SE + (0.5f * fVec0SE[1]))); // step: 463
			fTemp10SE = (fVec46SE[1] + (fRec43SE + (0.5f * fVec24SE[1]))); // step: 464
			fVec142SE[IOTA0&1023] = fTemp9SE;
			fVec143SE[IOTA0&2047] = fTemp10SE;
			fVec0SE[0] = fVec142SE[(IOTA0-iConst19KI)&1023];
			float 	fRec45SE = -(0.5f * fTemp9SE); // Zero delay
			fVec24SE[0] = fVec143SE[(IOTA0-iSlow19BE)&2047];
			float 	fRec47SE = -(0.5f * fTemp10SE); // Zero delay
			fVec23SE[0] = fVec0SE[0];
			fVec47SE[0] = fVec24SE[0];
			output0[i] = (FAUSTFLOAT)(((fRec45SE + fVec23SE[1]) + (fSlow1BE * fTemp0SE)));  // Zone Exec Code
			output1[i] = (FAUSTFLOAT)(((fSlow1BE * fTemp1SE) + (fRec47SE + fVec47SE[1])));  // Zone Exec Code
			// post processing
			fVec47SE[1] = fVec47SE[0];
			fVec23SE[1] = fVec23SE[0];
			fVec24SE[1] = fVec24SE[0];
			fVec0SE[1] = fVec0SE[0];
			fVec46SE[1] = fVec46SE[0];
			fVec22SE[1] = fVec22SE[0];
			fVec25SE[1] = fVec25SE[0];
			fVec1SE[1] = fVec1SE[0];
			fVec45SE[1] = fVec45SE[0];
			fVec21SE[1] = fVec21SE[0];
			fVec26SE[1] = fVec26SE[0];
			fVec2SE[1] = fVec2SE[0];
			fVec44SE[1] = fVec44SE[0];
			fVec20SE[1] = fVec20SE[0];
			fVec27SE[1] = fVec27SE[0];
			fVec3SE[1] = fVec3SE[0];
			fVec43SE[1] = fVec43SE[0];
			fVec41SE[1] = fVec41SE[0];
			fVec39SE[1] = fVec39SE[0];
			fVec37SE[1] = fVec37SE[0];
			fVec35SE[1] = fVec35SE[0];
			fVec33SE[1] = fVec33SE[0];
			fVec31SE[1] = fVec31SE[0];
			fVec29SE[1] = fVec29SE[0];
			fVec19SE[1] = fVec19SE[0];
			fVec17SE[1] = fVec17SE[0];
			fVec15SE[1] = fVec15SE[0];
			fVec13SE[1] = fVec13SE[0];
			fVec11SE[1] = fVec11SE[0];
			fVec9SE[1] = fVec9SE[0];
			fVec7SE[1] = fVec7SE[0];
			fVec5SE[1] = fVec5SE[0];
			++IOTA0; // inc IOTA for clock: 0x12be12600
			fVec42SE[1] = fVec42SE[0];
			fVec40SE[1] = fVec40SE[0];
			fVec38SE[1] = fVec38SE[0];
			fVec36SE[1] = fVec36SE[0];
			fVec34SE[1] = fVec34SE[0];
			fVec32SE[1] = fVec32SE[0];
			fVec30SE[1] = fVec30SE[0];
			fVec28SE[1] = fVec28SE[0];
			fVec18SE[1] = fVec18SE[0];
			fVec16SE[1] = fVec16SE[0];
			fVec14SE[1] = fVec14SE[0];
			fVec12SE[1] = fVec12SE[0];
			fVec10SE[1] = fVec10SE[0];
			fVec8SE[1] = fVec8SE[0];
			fVec6SE[1] = fVec6SE[0];
			fVec4SE[1] = fVec4SE[0];
		}
		fVec4SEState = fVec4SE[1];
		fVec6SEState = fVec6SE[1];
		fVec8SEState = fVec8SE[1];
		fVec10SEState = fVec10SE[1];
		fVec12SEState = fVec12SE[1];
		fVec14SEState = fVec14SE[1];
		fVec16SEState = fVec16SE[1];
		fVec18SEState = fVec18SE[1];
		fVec28SEState = fVec28SE[1];
		fVec30SEState = fVec30SE[1];
		fVec32SEState = fVec32SE[1];
		fVec34SEState = fVec34SE[1];
		fVec36SEState = fVec36SE[1];
		fVec38SEState = fVec38SE[1];
		fVec40SEState = fVec40SE[1];
		fVec42SEState = fVec42SE[1];
		fVec5SEState = fVec5SE[1];
		fVec7SEState = fVec7SE[1];
		fVec9SEState = fVec9SE[1];
		fVec11SEState = fVec11SE[1];
		fVec13SEState = fVec13SE[1];
		fVec15SEState = fVec15SE[1];
		fVec17SEState = fVec17SE[1];
		fVec19SEState = fVec19SE[1];
		fVec29SEState = fVec29SE[1];
		fVec31SEState = fVec31SE[1];
		fVec33SEState = fVec33SE[1];
		fVec35SEState = fVec35SE[1];
		fVec37SEState = fVec37SE[1];
		fVec39SEState = fVec39SE[1];
		fVec41SEState = fVec41SE[1];
		fVec43SEState = fVec43SE[1];
		fVec3SEState = fVec3SE[1];
		fVec27SEState = fVec27SE[1];
		fVec20SEState = fVec20SE[1];
		fVec44SEState = fVec44SE[1];
		fVec2SEState = fVec2SE[1];
		fVec26SEState = fVec26SE[1];
		fVec21SEState = fVec21SE[1];
		fVec45SEState = fVec45SE[1];
		fVec1SEState = fVec1SE[1];
		fVec25SEState = fVec25SE[1];
		fVec22SEState = fVec22SE[1];
		fVec46SEState = fVec46SE[1];
		fVec0SEState = fVec0SE[1];
		fVec24SEState = fVec24SE[1];
		fVec23SEState = fVec23SE[1];
		fVec47SEState = fVec47SE[1];
	}
};


