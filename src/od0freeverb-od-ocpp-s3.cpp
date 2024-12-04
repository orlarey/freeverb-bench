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
	FAUSTFLOAT 	fbutton0;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT 	fslider2;
	float 	fConst0KI; // step: 8
	FAUSTFLOAT 	fslider3;
	float 	fConst1KI; // step: 8
	float 	fConst2KI; // step: 8
	// Recursion delay fVec4SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec4SEState; // Single Delay
	int 	IOTA0; // IOTA for clock: 0x14a70b720
	float 	fVec7SE[8192]; // Ring Delay
	int 	iConst3KI; // step: 8
	// Recursion delay fVec9SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec9SEState; // Single Delay
	float 	fVec12SE[8192]; // Ring Delay
	int 	iConst4KI; // step: 8
	// Recursion delay fVec14SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec14SEState; // Single Delay
	float 	fVec17SE[8192]; // Ring Delay
	int 	iConst5KI; // step: 8
	// Recursion delay fVec19SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec19SEState; // Single Delay
	float 	fVec22SE[8192]; // Ring Delay
	int 	iConst6KI; // step: 8
	// Recursion delay fVec24SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec24SEState; // Single Delay
	float 	fVec27SE[8192]; // Ring Delay
	int 	iConst7KI; // step: 8
	// Recursion delay fVec29SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec29SEState; // Single Delay
	float 	fVec32SE[8192]; // Ring Delay
	int 	iConst8KI; // step: 8
	// Recursion delay fVec34SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec34SEState; // Single Delay
	float 	fVec37SE[8192]; // Ring Delay
	int 	iConst9KI; // step: 8
	// Recursion delay fVec39SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec39SEState; // Single Delay
	float 	fVec42SE[8192]; // Ring Delay
	int 	iConst10KI; // step: 8
	int 	iConst11KI; // step: 8
	// Recursion delay fVec5SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec5SEState; // Single Delay
	// Recursion delay fVec10SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec10SEState; // Single Delay
	// Recursion delay fVec15SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec15SEState; // Single Delay
	// Recursion delay fVec20SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec20SEState; // Single Delay
	// Recursion delay fVec25SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec25SEState; // Single Delay
	// Recursion delay fVec30SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec30SEState; // Single Delay
	// Recursion delay fVec35SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec35SEState; // Single Delay
	// Recursion delay fVec40SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec40SEState; // Single Delay
	float 	fVec52SE[2048]; // Ring Delay
	int 	iConst12KI; // step: 8
	// Recursion delay fRec16SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec56SE[2048]; // Ring Delay
	int 	iConst13KI; // step: 8
	int 	iConst14KI; // step: 8
	// Recursion delay fRec17SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec60SE[2048]; // Ring Delay
	int 	iConst15KI; // step: 8
	int 	iConst16KI; // step: 8
	// Recursion delay fRec18SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec64SE[1024]; // Ring Delay
	int 	iConst17KI; // step: 8
	int 	iConst18KI; // step: 8
	// Recursion delay fRec19SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fPermVar0SE; // Perm Var
	// Recursion delay fVec72SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec72SEState; // Single Delay
	float 	fVec75SE[8192]; // Ring Delay
	float 	fConst19KI; // step: 8
	// Recursion delay fVec77SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec77SEState; // Single Delay
	float 	fVec80SE[8192]; // Ring Delay
	// Recursion delay fVec82SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec82SEState; // Single Delay
	float 	fVec85SE[8192]; // Ring Delay
	// Recursion delay fVec87SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec87SEState; // Single Delay
	float 	fVec90SE[8192]; // Ring Delay
	// Recursion delay fVec92SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec92SEState; // Single Delay
	float 	fVec95SE[8192]; // Ring Delay
	// Recursion delay fVec97SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec97SEState; // Single Delay
	float 	fVec100SE[8192]; // Ring Delay
	// Recursion delay fVec102SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec102SEState; // Single Delay
	float 	fVec105SE[8192]; // Ring Delay
	// Recursion delay fVec107SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec107SEState; // Single Delay
	float 	fVec110SE[8192]; // Ring Delay
	// Recursion delay fVec73SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec73SEState; // Single Delay
	// Recursion delay fVec78SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec78SEState; // Single Delay
	// Recursion delay fVec83SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec83SEState; // Single Delay
	// Recursion delay fVec88SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec88SEState; // Single Delay
	// Recursion delay fVec93SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec93SEState; // Single Delay
	// Recursion delay fVec98SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec98SEState; // Single Delay
	// Recursion delay fVec103SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec103SEState; // Single Delay
	// Recursion delay fVec108SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec108SEState; // Single Delay
	float 	fVec120SE[2048]; // Ring Delay
	// Recursion delay fRec36SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec124SE[2048]; // Ring Delay
	// Recursion delay fRec37SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec128SE[2048]; // Ring Delay
	// Recursion delay fRec38SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec132SE[2048]; // Ring Delay
	// Recursion delay fRec39SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fPermVar1SE; // Perm Var
	// Recursion delay fVec0SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec0SEState; // Single Delay
	// Recursion delay fVec1SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec1SEState; // Single Delay
	// Recursion delay fVec2SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec2SEState; // Single Delay
	// Recursion delay fVec3SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec3SEState; // Single Delay
	float 	fVec54SEState; // Single Delay
	float 	fVec58SEState; // Single Delay
	float 	fVec62SEState; // Single Delay
	float 	fVec66SEState; // Single Delay
	// Recursion delay fVec68SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec68SEState; // Single Delay
	// Recursion delay fVec69SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec69SEState; // Single Delay
	// Recursion delay fVec70SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec70SEState; // Single Delay
	// Recursion delay fVec71SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec71SEState; // Single Delay
	float 	fVec122SEState; // Single Delay
	float 	fVec126SEState; // Single Delay
	float 	fVec130SEState; // Single Delay
	float 	fVec134SEState; // Single Delay
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
		m->declare("filename", "od0freeverb.dsp");
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
		fConst0KI = std::min(1.92e+05f, std::max(1.0f, float(fSampleRate))); // step: 8
		fConst1KI = (1.764e+04f / fConst0KI); // step: 8
		fConst2KI = (12348.0f / fConst0KI); // step: 8
		IOTA0 = 0; // init IOTA for clock: 0x14a70b720
		iConst3KI = int((0.025306122f * fConst0KI)); // step: 8
		iConst4KI = int((0.026938776f * fConst0KI)); // step: 8
		iConst5KI = int((0.028956916f * fConst0KI)); // step: 8
		iConst6KI = int((0.030748298f * fConst0KI)); // step: 8
		iConst7KI = int((0.0322449f * fConst0KI)); // step: 8
		iConst8KI = int((0.033809524f * fConst0KI)); // step: 8
		iConst9KI = int((0.035306122f * fConst0KI)); // step: 8
		iConst10KI = int((0.036666665f * fConst0KI)); // step: 8
		iConst11KI = int((0.0126077095f * fConst0KI)); // step: 8
		iConst12KI = std::min(1024, std::max(0, (iConst11KI + -1))); // step: 8
		iConst13KI = int((0.01f * fConst0KI)); // step: 8
		iConst14KI = std::min(1024, std::max(0, (iConst13KI + -1))); // step: 8
		iConst15KI = int((0.0077324263f * fConst0KI)); // step: 8
		iConst16KI = std::min(1024, std::max(0, (iConst15KI + -1))); // step: 8
		iConst17KI = int((0.0051020407f * fConst0KI)); // step: 8
		iConst18KI = std::min(1024, std::max(0, (iConst17KI + -1))); // step: 8
		fConst19KI = (0.0010430838f * fConst0KI); // step: 8
	}
	virtual void instanceResetUserInterface() {
		fbutton0 = 0.0;
		fslider0 = 0.5f;
		fslider1 = 0.5f;
		fslider2 = 0.5f;
		fslider3 = 0.3333f;
	}
	virtual void instanceClear() {
		fVec4SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec7SE[i] = 0; }
		fVec7SE[0] = -1;  // detect unintialized
		fVec9SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec12SE[i] = 0; }
		fVec12SE[0] = -1;  // detect unintialized
		fVec14SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec17SE[i] = 0; }
		fVec17SE[0] = -1;  // detect unintialized
		fVec19SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec22SE[i] = 0; }
		fVec22SE[0] = -1;  // detect unintialized
		fVec24SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec27SE[i] = 0; }
		fVec27SE[0] = -1;  // detect unintialized
		fVec29SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec32SE[i] = 0; }
		fVec32SE[0] = -1;  // detect unintialized
		fVec34SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec37SE[i] = 0; }
		fVec37SE[0] = -1;  // detect unintialized
		fVec39SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec42SE[i] = 0; }
		fVec42SE[0] = -1;  // detect unintialized
		fVec5SEState = 0;
		fVec10SEState = 0;
		fVec15SEState = 0;
		fVec20SEState = 0;
		fVec25SEState = 0;
		fVec30SEState = 0;
		fVec35SEState = 0;
		fVec40SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec52SE[i] = 0; }
		fVec52SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec56SE[i] = 0; }
		fVec56SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec60SE[i] = 0; }
		fVec60SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 1024; i++) { fVec64SE[i] = 0; }
		fVec64SE[0] = -1;  // detect unintialized
		fPermVar0SE = 0;
		fVec72SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec75SE[i] = 0; }
		fVec75SE[0] = -1;  // detect unintialized
		fVec77SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec80SE[i] = 0; }
		fVec80SE[0] = -1;  // detect unintialized
		fVec82SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec85SE[i] = 0; }
		fVec85SE[0] = -1;  // detect unintialized
		fVec87SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec90SE[i] = 0; }
		fVec90SE[0] = -1;  // detect unintialized
		fVec92SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec95SE[i] = 0; }
		fVec95SE[0] = -1;  // detect unintialized
		fVec97SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec100SE[i] = 0; }
		fVec100SE[0] = -1;  // detect unintialized
		fVec102SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec105SE[i] = 0; }
		fVec105SE[0] = -1;  // detect unintialized
		fVec107SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec110SE[i] = 0; }
		fVec110SE[0] = -1;  // detect unintialized
		fVec73SEState = 0;
		fVec78SEState = 0;
		fVec83SEState = 0;
		fVec88SEState = 0;
		fVec93SEState = 0;
		fVec98SEState = 0;
		fVec103SEState = 0;
		fVec108SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec120SE[i] = 0; }
		fVec120SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec124SE[i] = 0; }
		fVec124SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec128SE[i] = 0; }
		fVec128SE[0] = -1;  // detect unintialized
		for (int i = 1; i < 2048; i++) { fVec132SE[i] = 0; }
		fVec132SE[0] = -1;  // detect unintialized
		fPermVar1SE = 0;
		fVec0SEState = 0;
		fVec1SEState = 0;
		fVec2SEState = 0;
		fVec3SEState = 0;
		fVec54SEState = 0;
		fVec58SEState = 0;
		fVec62SEState = 0;
		fVec66SEState = 0;
		fVec68SEState = 0;
		fVec69SEState = 0;
		fVec70SEState = 0;
		fVec71SEState = 0;
		fVec122SEState = 0;
		fVec126SEState = 0;
		fVec130SEState = 0;
		fVec134SEState = 0;
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
		ui_interface->openVerticalBox("freeverb");
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
		ui_interface->addButton("run", &fbutton0);
		ui_interface->closeBox();
	}
	virtual void compute (int count, FAUSTFLOAT** input, FAUSTFLOAT** output) {
		float 	fTemp0SE; // step: 5
		float 	fTemp1SE; // step: 6
		int 	iSlow0BE = (float(fbutton0) == 1.0f); // Zone 2, step: 7
		float 	fSlow1BE = float(fslider3); // Zone 2, step: 8
		float 	fSlow2BE = (1.0f - fSlow1BE); // Zone 2, step: 8
		float 	fSlow3BE = (fConst1KI * float(fslider1)); // Zone 2, step: 8
		float 	fSlow4BE = (1.0f - fSlow3BE); // Zone 2, step: 8
		float 	fSlow5BE = ((fConst2KI * float(fslider0)) + 0.7f); // Zone 2, step: 8
		float 	fVec4SE[2];
		float 	fSlow6BE = (0.1f * fSlow1BE); // Zone 2, step: 8
		float 	fTemp2SE; // step: 8
		float 	fVec9SE[2];
		float 	fVec14SE[2];
		float 	fVec19SE[2];
		float 	fVec24SE[2];
		float 	fVec29SE[2];
		float 	fVec34SE[2];
		float 	fVec39SE[2];
		float 	fVec5SE[2];
		float 	fVec10SE[2];
		float 	fVec15SE[2];
		float 	fVec20SE[2];
		float 	fVec25SE[2];
		float 	fVec30SE[2];
		float 	fVec35SE[2];
		float 	fVec40SE[2];
		float 	fTemp3SE; // step: 8
		float 	fTemp4SE; // step: 8
		float 	fTemp5SE; // step: 8
		float 	fTemp6SE; // step: 8
		float 	fVec72SE[2];
		int 	iSlow7BE = int((fConst19KI * float(fslider2))); // Zone 2, step: 8
		int 	iSlow8BE = (iConst3KI + iSlow7BE); // Zone 2, step: 8
		float 	fVec77SE[2];
		int 	iSlow9BE = (iConst4KI + iSlow7BE); // Zone 2, step: 8
		float 	fVec82SE[2];
		int 	iSlow10BE = (iConst5KI + iSlow7BE); // Zone 2, step: 8
		float 	fVec87SE[2];
		int 	iSlow11BE = (iConst6KI + iSlow7BE); // Zone 2, step: 8
		float 	fVec92SE[2];
		int 	iSlow12BE = (iConst7KI + iSlow7BE); // Zone 2, step: 8
		float 	fVec97SE[2];
		int 	iSlow13BE = (iConst8KI + iSlow7BE); // Zone 2, step: 8
		float 	fVec102SE[2];
		int 	iSlow14BE = (iConst9KI + iSlow7BE); // Zone 2, step: 8
		float 	fVec107SE[2];
		int 	iSlow15BE = (iConst10KI + iSlow7BE); // Zone 2, step: 8
		int 	iSlow16BE = (iSlow7BE + -1); // Zone 2, step: 8
		int 	iSlow17BE = std::min(1024, std::max(0, (iConst11KI + iSlow16BE))); // Zone 2, step: 8
		float 	fVec73SE[2];
		float 	fVec78SE[2];
		float 	fVec83SE[2];
		float 	fVec88SE[2];
		float 	fVec93SE[2];
		float 	fVec98SE[2];
		float 	fVec103SE[2];
		float 	fVec108SE[2];
		float 	fTemp7SE; // step: 8
		float 	fTemp8SE; // step: 8
		int 	iSlow18BE = std::min(1024, std::max(0, (iConst13KI + iSlow16BE))); // Zone 2, step: 8
		float 	fTemp9SE; // step: 8
		int 	iSlow19BE = std::min(1024, std::max(0, (iConst15KI + iSlow16BE))); // Zone 2, step: 8
		float 	fTemp10SE; // step: 8
		int 	iSlow20BE = std::min(1024, std::max(0, (iConst17KI + iSlow16BE))); // Zone 2, step: 8
		float 	fVec0SE[2];
		float 	fVec1SE[2];
		float 	fVec2SE[2];
		float 	fVec3SE[2];
		float 	fVec54SE[2];
		float 	fVec58SE[2];
		float 	fVec62SE[2];
		float 	fVec66SE[2];
		float 	fVec68SE[2];
		float 	fVec69SE[2];
		float 	fVec70SE[2];
		float 	fVec71SE[2];
		float 	fVec122SE[2];
		float 	fVec126SE[2];
		float 	fVec130SE[2];
		float 	fVec134SE[2];
		FAUSTFLOAT* input0 = input[0]; // Zone 3
		FAUSTFLOAT* input1 = input[1]; // Zone 3
		FAUSTFLOAT* output0 = output[0]; // Zone 3
		FAUSTFLOAT* output1 = output[1]; // Zone 3
		fVec4SE[1] = fVec4SEState;
		fVec9SE[1] = fVec9SEState;
		fVec14SE[1] = fVec14SEState;
		fVec19SE[1] = fVec19SEState;
		fVec24SE[1] = fVec24SEState;
		fVec29SE[1] = fVec29SEState;
		fVec34SE[1] = fVec34SEState;
		fVec39SE[1] = fVec39SEState;
		fVec5SE[1] = fVec5SEState;
		fVec10SE[1] = fVec10SEState;
		fVec15SE[1] = fVec15SEState;
		fVec20SE[1] = fVec20SEState;
		fVec25SE[1] = fVec25SEState;
		fVec30SE[1] = fVec30SEState;
		fVec35SE[1] = fVec35SEState;
		fVec40SE[1] = fVec40SEState;
		fVec72SE[1] = fVec72SEState;
		fVec77SE[1] = fVec77SEState;
		fVec82SE[1] = fVec82SEState;
		fVec87SE[1] = fVec87SEState;
		fVec92SE[1] = fVec92SEState;
		fVec97SE[1] = fVec97SEState;
		fVec102SE[1] = fVec102SEState;
		fVec107SE[1] = fVec107SEState;
		fVec73SE[1] = fVec73SEState;
		fVec78SE[1] = fVec78SEState;
		fVec83SE[1] = fVec83SEState;
		fVec88SE[1] = fVec88SEState;
		fVec93SE[1] = fVec93SEState;
		fVec98SE[1] = fVec98SEState;
		fVec103SE[1] = fVec103SEState;
		fVec108SE[1] = fVec108SEState;
		fVec0SE[1] = fVec0SEState;
		fVec1SE[1] = fVec1SEState;
		fVec2SE[1] = fVec2SEState;
		fVec3SE[1] = fVec3SEState;
		fVec54SE[1] = fVec54SEState;
		fVec58SE[1] = fVec58SEState;
		fVec62SE[1] = fVec62SEState;
		fVec66SE[1] = fVec66SEState;
		fVec68SE[1] = fVec68SEState;
		fVec69SE[1] = fVec69SEState;
		fVec70SE[1] = fVec70SEState;
		fVec71SE[1] = fVec71SEState;
		fVec122SE[1] = fVec122SEState;
		fVec126SE[1] = fVec126SEState;
		fVec130SE[1] = fVec130SEState;
		fVec134SE[1] = fVec134SEState;
		for (int i=0; i<count; i++) {
			fTemp0SE = (float)input1[i]; // step: 5
			fTemp1SE = (float)input0[i]; // step: 6
			if (iSlow0BE) {
				fVec4SE[0] = ((fSlow3BE * fVec4SE[1]) + (fSlow4BE * fVec5SE[1]));
				fTemp2SE = (fSlow6BE * (fTemp1SE + fTemp0SE)); // step: 8
				fVec7SE[IOTA0&8191] = ((fSlow5BE * fVec4SE[0]) + fTemp2SE);
				fVec9SE[0] = ((fSlow3BE * fVec9SE[1]) + (fSlow4BE * fVec10SE[1]));
				fVec12SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec9SE[0]));
				fVec14SE[0] = ((fSlow3BE * fVec14SE[1]) + (fSlow4BE * fVec15SE[1]));
				fVec17SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec14SE[0]));
				fVec19SE[0] = ((fSlow3BE * fVec19SE[1]) + (fSlow4BE * fVec20SE[1]));
				fVec22SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec19SE[0]));
				fVec24SE[0] = ((fSlow3BE * fVec24SE[1]) + (fSlow4BE * fVec25SE[1]));
				fVec27SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec24SE[0]));
				fVec29SE[0] = ((fSlow3BE * fVec29SE[1]) + (fSlow4BE * fVec30SE[1]));
				fVec32SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec29SE[0]));
				fVec34SE[0] = ((fSlow3BE * fVec34SE[1]) + (fSlow4BE * fVec35SE[1]));
				fVec37SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec34SE[0]));
				fVec39SE[0] = ((fSlow3BE * fVec39SE[1]) + (fSlow4BE * fVec40SE[1]));
				fVec42SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec39SE[0]));
				fVec5SE[0] = fVec7SE[(IOTA0-iConst3KI)&8191];
				fVec10SE[0] = fVec12SE[(IOTA0-iConst4KI)&8191];
				fVec15SE[0] = fVec17SE[(IOTA0-iConst5KI)&8191];
				fVec20SE[0] = fVec22SE[(IOTA0-iConst6KI)&8191];
				fVec25SE[0] = fVec27SE[(IOTA0-iConst7KI)&8191];
				fVec30SE[0] = fVec32SE[(IOTA0-iConst8KI)&8191];
				fVec35SE[0] = fVec37SE[(IOTA0-iConst9KI)&8191];
				fVec40SE[0] = fVec42SE[(IOTA0-iConst10KI)&8191];
				fTemp3SE = (((((((((0.5f * fVec3SE[1]) + fVec5SE[0]) + fVec10SE[0]) + fVec15SE[0]) + fVec20SE[0]) + fVec25SE[0]) + fVec30SE[0]) + fVec35SE[0]) + fVec40SE[0]); // step: 8
				fVec52SE[IOTA0&2047] = fTemp3SE;
				float 	fRec16SE = -(0.5f * fTemp3SE); // Zero delay
				fTemp4SE = (((0.5f * fVec2SE[1]) + fVec54SE[1]) + fRec16SE); // step: 8
				fVec56SE[IOTA0&2047] = fTemp4SE;
				float 	fRec17SE = -(0.5f * fTemp4SE); // Zero delay
				fTemp5SE = (((0.5f * fVec1SE[1]) + fVec58SE[1]) + fRec17SE); // step: 8
				fVec60SE[IOTA0&2047] = fTemp5SE;
				float 	fRec18SE = -(0.5f * fTemp5SE); // Zero delay
				fTemp6SE = (((0.5f * fVec0SE[1]) + fVec62SE[1]) + fRec18SE); // step: 8
				fVec64SE[IOTA0&1023] = fTemp6SE;
				float 	fRec19SE = -(0.5f * fTemp6SE); // Zero delay
				fPermVar0SE = ((fVec66SE[1] + (fSlow2BE * fTemp1SE)) + fRec19SE);
				fVec72SE[0] = ((fSlow3BE * fVec72SE[1]) + (fSlow4BE * fVec73SE[1]));
				fVec75SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec72SE[0]));
				fVec77SE[0] = ((fSlow3BE * fVec77SE[1]) + (fSlow4BE * fVec78SE[1]));
				fVec80SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec77SE[0]));
				fVec82SE[0] = ((fSlow3BE * fVec82SE[1]) + (fSlow4BE * fVec83SE[1]));
				fVec85SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec82SE[0]));
				fVec87SE[0] = ((fSlow3BE * fVec87SE[1]) + (fSlow4BE * fVec88SE[1]));
				fVec90SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec87SE[0]));
				fVec92SE[0] = ((fSlow3BE * fVec92SE[1]) + (fSlow4BE * fVec93SE[1]));
				fVec95SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec92SE[0]));
				fVec97SE[0] = ((fSlow3BE * fVec97SE[1]) + (fSlow4BE * fVec98SE[1]));
				fVec100SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec97SE[0]));
				fVec102SE[0] = ((fSlow3BE * fVec102SE[1]) + (fSlow4BE * fVec103SE[1]));
				fVec105SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec102SE[0]));
				fVec107SE[0] = ((fSlow3BE * fVec107SE[1]) + (fSlow4BE * fVec108SE[1]));
				fVec110SE[IOTA0&8191] = (fTemp2SE + (fSlow5BE * fVec107SE[0]));
				fVec73SE[0] = fVec75SE[(IOTA0-iSlow8BE)&8191];
				fVec78SE[0] = fVec80SE[(IOTA0-iSlow9BE)&8191];
				fVec83SE[0] = fVec85SE[(IOTA0-iSlow10BE)&8191];
				fVec88SE[0] = fVec90SE[(IOTA0-iSlow11BE)&8191];
				fVec93SE[0] = fVec95SE[(IOTA0-iSlow12BE)&8191];
				fVec98SE[0] = fVec100SE[(IOTA0-iSlow13BE)&8191];
				fVec103SE[0] = fVec105SE[(IOTA0-iSlow14BE)&8191];
				fVec108SE[0] = fVec110SE[(IOTA0-iSlow15BE)&8191];
				fTemp7SE = (((((((((0.5f * fVec71SE[1]) + fVec73SE[0]) + fVec78SE[0]) + fVec83SE[0]) + fVec88SE[0]) + fVec93SE[0]) + fVec98SE[0]) + fVec103SE[0]) + fVec108SE[0]); // step: 8
				fVec120SE[IOTA0&2047] = fTemp7SE;
				float 	fRec36SE = -(0.5f * fTemp7SE); // Zero delay
				fTemp8SE = (((0.5f * fVec70SE[1]) + fVec122SE[1]) + fRec36SE); // step: 8
				fVec124SE[IOTA0&2047] = fTemp8SE;
				float 	fRec37SE = -(0.5f * fTemp8SE); // Zero delay
				fTemp9SE = (((0.5f * fVec69SE[1]) + fVec126SE[1]) + fRec37SE); // step: 8
				fVec128SE[IOTA0&2047] = fTemp9SE;
				float 	fRec38SE = -(0.5f * fTemp9SE); // Zero delay
				fTemp10SE = (((0.5f * fVec68SE[1]) + fVec130SE[1]) + fRec38SE); // step: 8
				fVec132SE[IOTA0&2047] = fTemp10SE;
				float 	fRec39SE = -(0.5f * fTemp10SE); // Zero delay
				fPermVar1SE = ((fVec134SE[1] + (fSlow2BE * fTemp0SE)) + fRec39SE);
				fVec0SE[0] = fVec64SE[(IOTA0-iConst18KI)&1023];
				fVec1SE[0] = fVec60SE[(IOTA0-iConst16KI)&2047];
				fVec2SE[0] = fVec56SE[(IOTA0-iConst14KI)&2047];
				fVec3SE[0] = fVec52SE[(IOTA0-iConst12KI)&2047];
				fVec54SE[0] = fVec3SE[0];
				fVec58SE[0] = fVec2SE[0];
				fVec62SE[0] = fVec1SE[0];
				fVec66SE[0] = fVec0SE[0];
				fVec68SE[0] = fVec132SE[(IOTA0-iSlow20BE)&2047];
				fVec69SE[0] = fVec128SE[(IOTA0-iSlow19BE)&2047];
				fVec70SE[0] = fVec124SE[(IOTA0-iSlow18BE)&2047];
				fVec71SE[0] = fVec120SE[(IOTA0-iSlow17BE)&2047];
				fVec122SE[0] = fVec71SE[0];
				fVec126SE[0] = fVec70SE[0];
				fVec130SE[0] = fVec69SE[0];
				fVec134SE[0] = fVec68SE[0];
				fVec134SE[1] = fVec134SE[0];
				fVec130SE[1] = fVec130SE[0];
				fVec126SE[1] = fVec126SE[0];
				fVec122SE[1] = fVec122SE[0];
				fVec71SE[1] = fVec71SE[0];
				fVec70SE[1] = fVec70SE[0];
				fVec69SE[1] = fVec69SE[0];
				fVec68SE[1] = fVec68SE[0];
				fVec66SE[1] = fVec66SE[0];
				fVec62SE[1] = fVec62SE[0];
				fVec58SE[1] = fVec58SE[0];
				fVec54SE[1] = fVec54SE[0];
				fVec3SE[1] = fVec3SE[0];
				fVec2SE[1] = fVec2SE[0];
				fVec1SE[1] = fVec1SE[0];
				fVec0SE[1] = fVec0SE[0];
				fVec108SE[1] = fVec108SE[0];
				fVec103SE[1] = fVec103SE[0];
				fVec98SE[1] = fVec98SE[0];
				fVec93SE[1] = fVec93SE[0];
				fVec88SE[1] = fVec88SE[0];
				fVec83SE[1] = fVec83SE[0];
				fVec78SE[1] = fVec78SE[0];
				fVec73SE[1] = fVec73SE[0];
				fVec107SE[1] = fVec107SE[0];
				fVec102SE[1] = fVec102SE[0];
				fVec97SE[1] = fVec97SE[0];
				fVec92SE[1] = fVec92SE[0];
				fVec87SE[1] = fVec87SE[0];
				fVec82SE[1] = fVec82SE[0];
				fVec77SE[1] = fVec77SE[0];
				fVec72SE[1] = fVec72SE[0];
				fVec40SE[1] = fVec40SE[0];
				fVec35SE[1] = fVec35SE[0];
				fVec30SE[1] = fVec30SE[0];
				fVec25SE[1] = fVec25SE[0];
				fVec20SE[1] = fVec20SE[0];
				fVec15SE[1] = fVec15SE[0];
				fVec10SE[1] = fVec10SE[0];
				fVec5SE[1] = fVec5SE[0];
				fVec39SE[1] = fVec39SE[0];
				fVec34SE[1] = fVec34SE[0];
				fVec29SE[1] = fVec29SE[0];
				fVec24SE[1] = fVec24SE[0];
				fVec19SE[1] = fVec19SE[0];
				fVec14SE[1] = fVec14SE[0];
				fVec9SE[1] = fVec9SE[0];
				++IOTA0; // inc IOTA for clock: 0x14a70b720
				fVec4SE[1] = fVec4SE[0];
			}
			output0[i] = (FAUSTFLOAT)(fPermVar0SE);  // Zone Exec Code
			output1[i] = (FAUSTFLOAT)(fPermVar1SE);  // Zone Exec Code
		}
		fVec4SEState = fVec4SE[1];
		fVec9SEState = fVec9SE[1];
		fVec14SEState = fVec14SE[1];
		fVec19SEState = fVec19SE[1];
		fVec24SEState = fVec24SE[1];
		fVec29SEState = fVec29SE[1];
		fVec34SEState = fVec34SE[1];
		fVec39SEState = fVec39SE[1];
		fVec5SEState = fVec5SE[1];
		fVec10SEState = fVec10SE[1];
		fVec15SEState = fVec15SE[1];
		fVec20SEState = fVec20SE[1];
		fVec25SEState = fVec25SE[1];
		fVec30SEState = fVec30SE[1];
		fVec35SEState = fVec35SE[1];
		fVec40SEState = fVec40SE[1];
		fVec72SEState = fVec72SE[1];
		fVec77SEState = fVec77SE[1];
		fVec82SEState = fVec82SE[1];
		fVec87SEState = fVec87SE[1];
		fVec92SEState = fVec92SE[1];
		fVec97SEState = fVec97SE[1];
		fVec102SEState = fVec102SE[1];
		fVec107SEState = fVec107SE[1];
		fVec73SEState = fVec73SE[1];
		fVec78SEState = fVec78SE[1];
		fVec83SEState = fVec83SE[1];
		fVec88SEState = fVec88SE[1];
		fVec93SEState = fVec93SE[1];
		fVec98SEState = fVec98SE[1];
		fVec103SEState = fVec103SE[1];
		fVec108SEState = fVec108SE[1];
		fVec0SEState = fVec0SE[1];
		fVec1SEState = fVec1SE[1];
		fVec2SEState = fVec2SE[1];
		fVec3SEState = fVec3SE[1];
		fVec54SEState = fVec54SE[1];
		fVec58SEState = fVec58SE[1];
		fVec62SEState = fVec62SE[1];
		fVec66SEState = fVec66SE[1];
		fVec68SEState = fVec68SE[1];
		fVec69SEState = fVec69SE[1];
		fVec70SEState = fVec70SE[1];
		fVec71SEState = fVec71SE[1];
		fVec122SEState = fVec122SE[1];
		fVec126SEState = fVec126SE[1];
		fVec130SEState = fVec130SE[1];
		fVec134SEState = fVec134SE[1];
	}
};


