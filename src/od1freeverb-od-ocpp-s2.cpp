//----------------------------------------------------------
// author: "RM"
// name: "freeverb"
// version: "0.0"
//
// Code generated with Faust 2.75.9 (https://faust.grame.fr)
// Compiler options: -lang ocpp -ct 1 -es 1 -mcl 4 -mcd 9 -mfs 1024 -irt 4 -fls 4 -udd 1 -mdd 1024 -mdy 33 -ss 2 -single -ftz 0 
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
	FAUSTFLOAT 	fslider3;
	float 	fConst0KI; // step: 8
	float 	fConst1KI; // step: 8
	// Recursion delay fVec3SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec3SEState; // Single Delay
	float 	fConst2KI; // step: 8
	int 	IOTA0; // IOTA for clock: 0x130de5bd0
	float 	fVec6SE[8192]; // Ring Delay
	int 	iConst3KI; // step: 8
	// Recursion delay fVec4SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec4SEState; // Single Delay
	// Recursion delay fVec9SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec9SEState; // Single Delay
	float 	fVec12SE[8192]; // Ring Delay
	int 	iConst4KI; // step: 8
	// Recursion delay fVec10SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec10SEState; // Single Delay
	// Recursion delay fVec15SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec15SEState; // Single Delay
	float 	fVec18SE[8192]; // Ring Delay
	int 	iConst5KI; // step: 8
	// Recursion delay fVec16SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec16SEState; // Single Delay
	// Recursion delay fVec21SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec21SEState; // Single Delay
	float 	fVec24SE[8192]; // Ring Delay
	int 	iConst6KI; // step: 8
	// Recursion delay fVec22SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec22SEState; // Single Delay
	// Recursion delay fVec27SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec27SEState; // Single Delay
	float 	fVec30SE[8192]; // Ring Delay
	int 	iConst7KI; // step: 8
	// Recursion delay fVec28SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec28SEState; // Single Delay
	// Recursion delay fVec33SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec33SEState; // Single Delay
	float 	fVec36SE[8192]; // Ring Delay
	int 	iConst8KI; // step: 8
	// Recursion delay fVec34SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec34SEState; // Single Delay
	// Recursion delay fVec39SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec39SEState; // Single Delay
	float 	fVec42SE[8192]; // Ring Delay
	int 	iConst9KI; // step: 8
	// Recursion delay fVec40SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec40SEState; // Single Delay
	// Recursion delay fVec45SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec45SEState; // Single Delay
	float 	fVec48SE[8192]; // Ring Delay
	int 	iConst10KI; // step: 8
	// Recursion delay fVec46SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec46SEState; // Single Delay
	// Recursion delay fRec16SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fRec17SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fRec18SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec58SE[1024]; // Ring Delay
	int 	iConst11KI; // step: 8
	int 	iConst12KI; // step: 8
	// Recursion delay fVec57SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec57SEState; // Single Delay
	float 	fVec60SE[2048]; // Ring Delay
	int 	iConst13KI; // step: 8
	int 	iConst14KI; // step: 8
	// Recursion delay fVec55SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec55SEState; // Single Delay
	float 	fVec62SE[2048]; // Ring Delay
	int 	iConst15KI; // step: 8
	int 	iConst16KI; // step: 8
	// Recursion delay fVec53SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec53SEState; // Single Delay
	float 	fVec64SE[2048]; // Ring Delay
	int 	iConst17KI; // step: 8
	int 	iConst18KI; // step: 8
	// Recursion delay fVec51SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec51SEState; // Single Delay
	float 	fVec2SEState; // Single Delay
	float 	fVec1SEState; // Single Delay
	float 	fVec0SEState; // Single Delay
	float 	fVec73SEState; // Single Delay
	// Recursion delay fRec23SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fVec78SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec78SEState; // Single Delay
	float 	fVec81SE[8192]; // Ring Delay
	float 	fConst19KI; // step: 8
	// Recursion delay fVec79SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec79SEState; // Single Delay
	// Recursion delay fVec84SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec84SEState; // Single Delay
	float 	fVec87SE[8192]; // Ring Delay
	// Recursion delay fVec85SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec85SEState; // Single Delay
	// Recursion delay fVec90SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec90SEState; // Single Delay
	float 	fVec93SE[8192]; // Ring Delay
	// Recursion delay fVec91SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec91SEState; // Single Delay
	// Recursion delay fVec96SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec96SEState; // Single Delay
	float 	fVec99SE[8192]; // Ring Delay
	// Recursion delay fVec97SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec97SEState; // Single Delay
	// Recursion delay fVec102SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec102SEState; // Single Delay
	float 	fVec105SE[8192]; // Ring Delay
	// Recursion delay fVec103SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec103SEState; // Single Delay
	// Recursion delay fVec108SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec108SEState; // Single Delay
	float 	fVec111SE[8192]; // Ring Delay
	// Recursion delay fVec109SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec109SEState; // Single Delay
	// Recursion delay fVec114SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec114SEState; // Single Delay
	float 	fVec117SE[8192]; // Ring Delay
	// Recursion delay fVec115SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec115SEState; // Single Delay
	// Recursion delay fVec120SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec120SEState; // Single Delay
	float 	fVec123SE[8192]; // Ring Delay
	// Recursion delay fVec121SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec121SEState; // Single Delay
	// Recursion delay fRec40SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fRec41SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fRec42SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec133SE[2048]; // Ring Delay
	// Recursion delay fVec132SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec132SEState; // Single Delay
	float 	fVec135SE[2048]; // Ring Delay
	// Recursion delay fVec130SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec130SEState; // Single Delay
	float 	fVec137SE[2048]; // Ring Delay
	// Recursion delay fVec128SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec128SEState; // Single Delay
	float 	fVec139SE[2048]; // Ring Delay
	// Recursion delay fVec126SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVec126SEState; // Single Delay
	float 	fVec77SEState; // Single Delay
	float 	fVec76SEState; // Single Delay
	float 	fVec75SEState; // Single Delay
	float 	fVec148SEState; // Single Delay
	// Recursion delay fRec47SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fPermVar0SE; // Perm Var
	float 	fPermVar1SE; // Perm Var
	int fSampleRate;

  public:
	virtual void metadata(Meta* m) { 
		m->declare("author", "RM");
		m->declare("compile_options", "-lang ocpp -ct 1 -es 1 -mcl 4 -mcd 9 -mfs 1024 -irt 4 -fls 4 -udd 1 -mdd 1024 -mdy 33 -ss 2 -single -ftz 0");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "1.1.0");
		m->declare("demos.lib/freeverb_demo:author", " Romain Michon");
		m->declare("demos.lib/freeverb_demo:licence", "LGPL");
		m->declare("demos.lib/name", "Faust Demos Library");
		m->declare("demos.lib/version", "1.2.0");
		m->declare("description", "Freeverb demo application.");
		m->declare("filename", "od1freeverb.dsp");
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
		fConst0KI = std::min(1.92e+05f, std::max(1.0f, float(fSampleRate))); // step: 8
		fConst1KI = (1.764e+04f / fConst0KI); // step: 8
		fConst2KI = (12348.0f / fConst0KI); // step: 8
		IOTA0 = 0; // init IOTA for clock: 0x130de5bd0
		iConst3KI = int((0.025306122f * fConst0KI)); // step: 8
		iConst4KI = int((0.026938776f * fConst0KI)); // step: 8
		iConst5KI = int((0.028956916f * fConst0KI)); // step: 8
		iConst6KI = int((0.030748298f * fConst0KI)); // step: 8
		iConst7KI = int((0.0322449f * fConst0KI)); // step: 8
		iConst8KI = int((0.033809524f * fConst0KI)); // step: 8
		iConst9KI = int((0.035306122f * fConst0KI)); // step: 8
		iConst10KI = int((0.036666665f * fConst0KI)); // step: 8
		iConst11KI = int((0.0051020407f * fConst0KI)); // step: 8
		iConst12KI = std::min(1024, std::max(0, (iConst11KI + -1))); // step: 8
		iConst13KI = int((0.0077324263f * fConst0KI)); // step: 8
		iConst14KI = std::min(1024, std::max(0, (iConst13KI + -1))); // step: 8
		iConst15KI = int((0.01f * fConst0KI)); // step: 8
		iConst16KI = std::min(1024, std::max(0, (iConst15KI + -1))); // step: 8
		iConst17KI = int((0.0126077095f * fConst0KI)); // step: 8
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
		fVec3SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec6SE[i] = 0; }
		fVec6SE[0] = -1;  // detect unintialized
		fVec4SEState = 0;
		fVec9SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec12SE[i] = 0; }
		fVec12SE[0] = -1;  // detect unintialized
		fVec10SEState = 0;
		fVec15SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec18SE[i] = 0; }
		fVec18SE[0] = -1;  // detect unintialized
		fVec16SEState = 0;
		fVec21SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec24SE[i] = 0; }
		fVec24SE[0] = -1;  // detect unintialized
		fVec22SEState = 0;
		fVec27SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec30SE[i] = 0; }
		fVec30SE[0] = -1;  // detect unintialized
		fVec28SEState = 0;
		fVec33SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec36SE[i] = 0; }
		fVec36SE[0] = -1;  // detect unintialized
		fVec34SEState = 0;
		fVec39SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec42SE[i] = 0; }
		fVec42SE[0] = -1;  // detect unintialized
		fVec40SEState = 0;
		fVec45SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec48SE[i] = 0; }
		fVec48SE[0] = -1;  // detect unintialized
		fVec46SEState = 0;
		for (int i = 1; i < 1024; i++) { fVec58SE[i] = 0; }
		fVec58SE[0] = -1;  // detect unintialized
		fVec57SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec60SE[i] = 0; }
		fVec60SE[0] = -1;  // detect unintialized
		fVec55SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec62SE[i] = 0; }
		fVec62SE[0] = -1;  // detect unintialized
		fVec53SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec64SE[i] = 0; }
		fVec64SE[0] = -1;  // detect unintialized
		fVec51SEState = 0;
		fVec2SEState = 0;
		fVec1SEState = 0;
		fVec0SEState = 0;
		fVec73SEState = 0;
		fVec78SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec81SE[i] = 0; }
		fVec81SE[0] = -1;  // detect unintialized
		fVec79SEState = 0;
		fVec84SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec87SE[i] = 0; }
		fVec87SE[0] = -1;  // detect unintialized
		fVec85SEState = 0;
		fVec90SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec93SE[i] = 0; }
		fVec93SE[0] = -1;  // detect unintialized
		fVec91SEState = 0;
		fVec96SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec99SE[i] = 0; }
		fVec99SE[0] = -1;  // detect unintialized
		fVec97SEState = 0;
		fVec102SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec105SE[i] = 0; }
		fVec105SE[0] = -1;  // detect unintialized
		fVec103SEState = 0;
		fVec108SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec111SE[i] = 0; }
		fVec111SE[0] = -1;  // detect unintialized
		fVec109SEState = 0;
		fVec114SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec117SE[i] = 0; }
		fVec117SE[0] = -1;  // detect unintialized
		fVec115SEState = 0;
		fVec120SEState = 0;
		for (int i = 1; i < 8192; i++) { fVec123SE[i] = 0; }
		fVec123SE[0] = -1;  // detect unintialized
		fVec121SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec133SE[i] = 0; }
		fVec133SE[0] = -1;  // detect unintialized
		fVec132SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec135SE[i] = 0; }
		fVec135SE[0] = -1;  // detect unintialized
		fVec130SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec137SE[i] = 0; }
		fVec137SE[0] = -1;  // detect unintialized
		fVec128SEState = 0;
		for (int i = 1; i < 2048; i++) { fVec139SE[i] = 0; }
		fVec139SE[0] = -1;  // detect unintialized
		fVec126SEState = 0;
		fVec77SEState = 0;
		fVec76SEState = 0;
		fVec75SEState = 0;
		fVec148SEState = 0;
		fPermVar0SE = 0;
		fPermVar1SE = 0;
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
		ui_interface->addButton("stop", &fbutton0);
		ui_interface->closeBox();
	}
	virtual void compute (int count, FAUSTFLOAT** input, FAUSTFLOAT** output) {
		float 	fTemp0SE; // step: 5
		int 	iSlow0BE = (float(fbutton0) == 0.0f); // Zone 2, step: 6
		float 	fTemp1SE; // step: 7
		float 	fSlow1BE = float(fslider3); // Zone 2, step: 8
		float 	fSlow2BE = (fConst1KI * float(fslider1)); // Zone 2, step: 8
		float 	fSlow3BE = (1.0f - fSlow2BE); // Zone 2, step: 8
		float 	fVec3SE[2];
		float 	fSlow4BE = ((fConst2KI * float(fslider0)) + 0.7f); // Zone 2, step: 8
		float 	fSlow5BE = (0.1f * fSlow1BE); // Zone 2, step: 8
		float 	fTemp2SE; // step: 8
		float 	fVec4SE[2];
		float 	fVec9SE[2];
		float 	fVec10SE[2];
		float 	fVec15SE[2];
		float 	fVec16SE[2];
		float 	fVec21SE[2];
		float 	fVec22SE[2];
		float 	fVec27SE[2];
		float 	fVec28SE[2];
		float 	fVec33SE[2];
		float 	fVec34SE[2];
		float 	fVec39SE[2];
		float 	fVec40SE[2];
		float 	fVec45SE[2];
		float 	fVec46SE[2];
		float 	fTemp3SE; // step: 8
		float 	fTemp4SE; // step: 8
		float 	fTemp5SE; // step: 8
		float 	fTemp6SE; // step: 8
		float 	fVec57SE[2];
		float 	fVec55SE[2];
		float 	fVec53SE[2];
		float 	fVec51SE[2];
		float 	fVec2SE[2];
		float 	fVec1SE[2];
		float 	fVec0SE[2];
		float 	fVec73SE[2];
		float 	fVec78SE[2];
		int 	iSlow6BE = int((fConst19KI * float(fslider2))); // Zone 2, step: 8
		int 	iSlow7BE = (iConst3KI + iSlow6BE); // Zone 2, step: 8
		float 	fVec79SE[2];
		float 	fVec84SE[2];
		int 	iSlow8BE = (iConst4KI + iSlow6BE); // Zone 2, step: 8
		float 	fVec85SE[2];
		float 	fVec90SE[2];
		int 	iSlow9BE = (iConst5KI + iSlow6BE); // Zone 2, step: 8
		float 	fVec91SE[2];
		float 	fVec96SE[2];
		int 	iSlow10BE = (iConst6KI + iSlow6BE); // Zone 2, step: 8
		float 	fVec97SE[2];
		float 	fVec102SE[2];
		int 	iSlow11BE = (iConst7KI + iSlow6BE); // Zone 2, step: 8
		float 	fVec103SE[2];
		float 	fVec108SE[2];
		int 	iSlow12BE = (iConst8KI + iSlow6BE); // Zone 2, step: 8
		float 	fVec109SE[2];
		float 	fVec114SE[2];
		int 	iSlow13BE = (iConst9KI + iSlow6BE); // Zone 2, step: 8
		float 	fVec115SE[2];
		float 	fVec120SE[2];
		int 	iSlow14BE = (iConst10KI + iSlow6BE); // Zone 2, step: 8
		float 	fVec121SE[2];
		float 	fTemp7SE; // step: 8
		float 	fTemp8SE; // step: 8
		float 	fTemp9SE; // step: 8
		float 	fTemp10SE; // step: 8
		int 	iSlow15BE = (iSlow6BE + -1); // Zone 2, step: 8
		int 	iSlow16BE = std::min(1024, std::max(0, (iConst11KI + iSlow15BE))); // Zone 2, step: 8
		float 	fVec132SE[2];
		int 	iSlow17BE = std::min(1024, std::max(0, (iConst13KI + iSlow15BE))); // Zone 2, step: 8
		float 	fVec130SE[2];
		int 	iSlow18BE = std::min(1024, std::max(0, (iConst15KI + iSlow15BE))); // Zone 2, step: 8
		float 	fVec128SE[2];
		int 	iSlow19BE = std::min(1024, std::max(0, (iConst17KI + iSlow15BE))); // Zone 2, step: 8
		float 	fVec126SE[2];
		float 	fVec77SE[2];
		float 	fVec76SE[2];
		float 	fVec75SE[2];
		float 	fVec148SE[2];
		float 	fSlow20BE = (1.0f - fSlow1BE); // Zone 2, step: 8
		FAUSTFLOAT* input0 = input[0]; // Zone 3
		FAUSTFLOAT* input1 = input[1]; // Zone 3
		FAUSTFLOAT* output0 = output[0]; // Zone 3
		FAUSTFLOAT* output1 = output[1]; // Zone 3
		fVec3SE[1] = fVec3SEState;
		fVec4SE[1] = fVec4SEState;
		fVec9SE[1] = fVec9SEState;
		fVec10SE[1] = fVec10SEState;
		fVec15SE[1] = fVec15SEState;
		fVec16SE[1] = fVec16SEState;
		fVec21SE[1] = fVec21SEState;
		fVec22SE[1] = fVec22SEState;
		fVec27SE[1] = fVec27SEState;
		fVec28SE[1] = fVec28SEState;
		fVec33SE[1] = fVec33SEState;
		fVec34SE[1] = fVec34SEState;
		fVec39SE[1] = fVec39SEState;
		fVec40SE[1] = fVec40SEState;
		fVec45SE[1] = fVec45SEState;
		fVec46SE[1] = fVec46SEState;
		fVec57SE[1] = fVec57SEState;
		fVec55SE[1] = fVec55SEState;
		fVec53SE[1] = fVec53SEState;
		fVec51SE[1] = fVec51SEState;
		fVec2SE[1] = fVec2SEState;
		fVec1SE[1] = fVec1SEState;
		fVec0SE[1] = fVec0SEState;
		fVec73SE[1] = fVec73SEState;
		fVec78SE[1] = fVec78SEState;
		fVec79SE[1] = fVec79SEState;
		fVec84SE[1] = fVec84SEState;
		fVec85SE[1] = fVec85SEState;
		fVec90SE[1] = fVec90SEState;
		fVec91SE[1] = fVec91SEState;
		fVec96SE[1] = fVec96SEState;
		fVec97SE[1] = fVec97SEState;
		fVec102SE[1] = fVec102SEState;
		fVec103SE[1] = fVec103SEState;
		fVec108SE[1] = fVec108SEState;
		fVec109SE[1] = fVec109SEState;
		fVec114SE[1] = fVec114SEState;
		fVec115SE[1] = fVec115SEState;
		fVec120SE[1] = fVec120SEState;
		fVec121SE[1] = fVec121SEState;
		fVec132SE[1] = fVec132SEState;
		fVec130SE[1] = fVec130SEState;
		fVec128SE[1] = fVec128SEState;
		fVec126SE[1] = fVec126SEState;
		fVec77SE[1] = fVec77SEState;
		fVec76SE[1] = fVec76SEState;
		fVec75SE[1] = fVec75SEState;
		fVec148SE[1] = fVec148SEState;
		for (int i=0; i<count; i++) {
			fTemp0SE = (float)input1[i]; // step: 5
			fTemp1SE = (float)input0[i]; // step: 7
			if (iSlow0BE) {
				fVec3SE[0] = ((fSlow2BE * fVec3SE[1]) + (fSlow3BE * fVec4SE[1]));
				fTemp2SE = (fSlow5BE * (fTemp1SE + fTemp0SE)); // step: 8
				fVec6SE[IOTA0&8191] = ((fSlow4BE * fVec3SE[0]) + fTemp2SE);
				fVec4SE[0] = fVec6SE[(IOTA0-iConst3KI)&8191];
				fVec9SE[0] = ((fSlow2BE * fVec9SE[1]) + (fSlow3BE * fVec10SE[1]));
				fVec12SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec9SE[0]));
				fVec10SE[0] = fVec12SE[(IOTA0-iConst4KI)&8191];
				fVec15SE[0] = ((fSlow2BE * fVec15SE[1]) + (fSlow3BE * fVec16SE[1]));
				fVec18SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec15SE[0]));
				fVec16SE[0] = fVec18SE[(IOTA0-iConst5KI)&8191];
				fVec21SE[0] = ((fSlow2BE * fVec21SE[1]) + (fSlow3BE * fVec22SE[1]));
				fVec24SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec21SE[0]));
				fVec22SE[0] = fVec24SE[(IOTA0-iConst6KI)&8191];
				fVec27SE[0] = ((fSlow2BE * fVec27SE[1]) + (fSlow3BE * fVec28SE[1]));
				fVec30SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec27SE[0]));
				fVec28SE[0] = fVec30SE[(IOTA0-iConst7KI)&8191];
				fVec33SE[0] = ((fSlow2BE * fVec33SE[1]) + (fSlow3BE * fVec34SE[1]));
				fVec36SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec33SE[0]));
				fVec34SE[0] = fVec36SE[(IOTA0-iConst8KI)&8191];
				fVec39SE[0] = ((fSlow2BE * fVec39SE[1]) + (fSlow3BE * fVec40SE[1]));
				fVec42SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec39SE[0]));
				fVec40SE[0] = fVec42SE[(IOTA0-iConst9KI)&8191];
				fVec45SE[0] = ((fSlow2BE * fVec45SE[1]) + (fSlow3BE * fVec46SE[1]));
				fVec48SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec45SE[0]));
				fVec46SE[0] = fVec48SE[(IOTA0-iConst10KI)&8191];
				fTemp3SE = ((((((((fVec4SE[0] + fVec10SE[0]) + fVec16SE[0]) + fVec22SE[0]) + fVec28SE[0]) + fVec34SE[0]) + fVec40SE[0]) + fVec46SE[0]) + (0.5f * fVec51SE[1])); // step: 8
				float 	fRec16SE = -(0.5f * fTemp3SE); // Zero delay
				fTemp4SE = (fVec2SE[1] + (fRec16SE + (0.5f * fVec53SE[1]))); // step: 8
				float 	fRec17SE = -(0.5f * fTemp4SE); // Zero delay
				fTemp5SE = (fVec1SE[1] + (fRec17SE + (0.5f * fVec55SE[1]))); // step: 8
				float 	fRec18SE = -(0.5f * fTemp5SE); // Zero delay
				fTemp6SE = (fVec0SE[1] + (fRec18SE + (0.5f * fVec57SE[1]))); // step: 8
				fVec58SE[IOTA0&1023] = fTemp6SE;
				fVec57SE[0] = fVec58SE[(IOTA0-iConst12KI)&1023];
				fVec60SE[IOTA0&2047] = fTemp5SE;
				fVec55SE[0] = fVec60SE[(IOTA0-iConst14KI)&2047];
				fVec62SE[IOTA0&2047] = fTemp4SE;
				fVec53SE[0] = fVec62SE[(IOTA0-iConst16KI)&2047];
				fVec64SE[IOTA0&2047] = fTemp3SE;
				fVec51SE[0] = fVec64SE[(IOTA0-iConst18KI)&2047];
				fVec2SE[0] = fVec51SE[0];
				fVec1SE[0] = fVec53SE[0];
				fVec0SE[0] = fVec55SE[0];
				fVec73SE[0] = fVec57SE[0];
				float 	fRec23SE = -(0.5f * fTemp6SE); // Zero delay
				fVec78SE[0] = ((fSlow2BE * fVec78SE[1]) + (fSlow3BE * fVec79SE[1]));
				fVec81SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec78SE[0]));
				fVec79SE[0] = fVec81SE[(IOTA0-iSlow7BE)&8191];
				fVec84SE[0] = ((fSlow2BE * fVec84SE[1]) + (fSlow3BE * fVec85SE[1]));
				fVec87SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec84SE[0]));
				fVec85SE[0] = fVec87SE[(IOTA0-iSlow8BE)&8191];
				fVec90SE[0] = ((fSlow2BE * fVec90SE[1]) + (fSlow3BE * fVec91SE[1]));
				fVec93SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec90SE[0]));
				fVec91SE[0] = fVec93SE[(IOTA0-iSlow9BE)&8191];
				fVec96SE[0] = ((fSlow2BE * fVec96SE[1]) + (fSlow3BE * fVec97SE[1]));
				fVec99SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec96SE[0]));
				fVec97SE[0] = fVec99SE[(IOTA0-iSlow10BE)&8191];
				fVec102SE[0] = ((fSlow2BE * fVec102SE[1]) + (fSlow3BE * fVec103SE[1]));
				fVec105SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec102SE[0]));
				fVec103SE[0] = fVec105SE[(IOTA0-iSlow11BE)&8191];
				fVec108SE[0] = ((fSlow2BE * fVec108SE[1]) + (fSlow3BE * fVec109SE[1]));
				fVec111SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec108SE[0]));
				fVec109SE[0] = fVec111SE[(IOTA0-iSlow12BE)&8191];
				fVec114SE[0] = ((fSlow2BE * fVec114SE[1]) + (fSlow3BE * fVec115SE[1]));
				fVec117SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec114SE[0]));
				fVec115SE[0] = fVec117SE[(IOTA0-iSlow13BE)&8191];
				fVec120SE[0] = ((fSlow2BE * fVec120SE[1]) + (fSlow3BE * fVec121SE[1]));
				fVec123SE[IOTA0&8191] = (fTemp2SE + (fSlow4BE * fVec120SE[0]));
				fVec121SE[0] = fVec123SE[(IOTA0-iSlow14BE)&8191];
				fTemp7SE = ((((((((fVec79SE[0] + fVec85SE[0]) + fVec91SE[0]) + fVec97SE[0]) + fVec103SE[0]) + fVec109SE[0]) + fVec115SE[0]) + fVec121SE[0]) + (0.5f * fVec126SE[1])); // step: 8
				float 	fRec40SE = -(0.5f * fTemp7SE); // Zero delay
				fTemp8SE = (fVec77SE[1] + (fRec40SE + (0.5f * fVec128SE[1]))); // step: 8
				float 	fRec41SE = -(0.5f * fTemp8SE); // Zero delay
				fTemp9SE = (fVec76SE[1] + (fRec41SE + (0.5f * fVec130SE[1]))); // step: 8
				float 	fRec42SE = -(0.5f * fTemp9SE); // Zero delay
				fTemp10SE = (fVec75SE[1] + (fRec42SE + (0.5f * fVec132SE[1]))); // step: 8
				fVec133SE[IOTA0&2047] = fTemp10SE;
				fVec132SE[0] = fVec133SE[(IOTA0-iSlow16BE)&2047];
				fVec135SE[IOTA0&2047] = fTemp9SE;
				fVec130SE[0] = fVec135SE[(IOTA0-iSlow17BE)&2047];
				fVec137SE[IOTA0&2047] = fTemp8SE;
				fVec128SE[0] = fVec137SE[(IOTA0-iSlow18BE)&2047];
				fVec139SE[IOTA0&2047] = fTemp7SE;
				fVec126SE[0] = fVec139SE[(IOTA0-iSlow19BE)&2047];
				fVec77SE[0] = fVec126SE[0];
				fVec76SE[0] = fVec128SE[0];
				fVec75SE[0] = fVec130SE[0];
				fVec148SE[0] = fVec132SE[0];
				float 	fRec47SE = -(0.5f * fTemp10SE); // Zero delay
				fPermVar0SE = ((fRec23SE + fVec73SE[1]) + (fSlow20BE * fTemp1SE));
				fPermVar1SE = ((fSlow20BE * fTemp0SE) + (fRec47SE + fVec148SE[1]));
				fVec148SE[1] = fVec148SE[0];
				fVec75SE[1] = fVec75SE[0];
				fVec76SE[1] = fVec76SE[0];
				fVec77SE[1] = fVec77SE[0];
				fVec126SE[1] = fVec126SE[0];
				fVec128SE[1] = fVec128SE[0];
				fVec130SE[1] = fVec130SE[0];
				fVec132SE[1] = fVec132SE[0];
				fVec121SE[1] = fVec121SE[0];
				fVec120SE[1] = fVec120SE[0];
				fVec115SE[1] = fVec115SE[0];
				fVec114SE[1] = fVec114SE[0];
				fVec109SE[1] = fVec109SE[0];
				fVec108SE[1] = fVec108SE[0];
				fVec103SE[1] = fVec103SE[0];
				fVec102SE[1] = fVec102SE[0];
				fVec97SE[1] = fVec97SE[0];
				fVec96SE[1] = fVec96SE[0];
				fVec91SE[1] = fVec91SE[0];
				fVec90SE[1] = fVec90SE[0];
				fVec85SE[1] = fVec85SE[0];
				fVec84SE[1] = fVec84SE[0];
				fVec79SE[1] = fVec79SE[0];
				fVec78SE[1] = fVec78SE[0];
				fVec73SE[1] = fVec73SE[0];
				fVec0SE[1] = fVec0SE[0];
				fVec1SE[1] = fVec1SE[0];
				fVec2SE[1] = fVec2SE[0];
				fVec51SE[1] = fVec51SE[0];
				fVec53SE[1] = fVec53SE[0];
				fVec55SE[1] = fVec55SE[0];
				fVec57SE[1] = fVec57SE[0];
				fVec46SE[1] = fVec46SE[0];
				fVec45SE[1] = fVec45SE[0];
				fVec40SE[1] = fVec40SE[0];
				fVec39SE[1] = fVec39SE[0];
				fVec34SE[1] = fVec34SE[0];
				fVec33SE[1] = fVec33SE[0];
				fVec28SE[1] = fVec28SE[0];
				fVec27SE[1] = fVec27SE[0];
				fVec22SE[1] = fVec22SE[0];
				fVec21SE[1] = fVec21SE[0];
				fVec16SE[1] = fVec16SE[0];
				fVec15SE[1] = fVec15SE[0];
				fVec10SE[1] = fVec10SE[0];
				fVec9SE[1] = fVec9SE[0];
				fVec4SE[1] = fVec4SE[0];
				++IOTA0; // inc IOTA for clock: 0x130de5bd0
				fVec3SE[1] = fVec3SE[0];
			}
			output0[i] = (FAUSTFLOAT)(fPermVar0SE);  // Zone Exec Code
			output1[i] = (FAUSTFLOAT)(fPermVar1SE);  // Zone Exec Code
		}
		fVec3SEState = fVec3SE[1];
		fVec4SEState = fVec4SE[1];
		fVec9SEState = fVec9SE[1];
		fVec10SEState = fVec10SE[1];
		fVec15SEState = fVec15SE[1];
		fVec16SEState = fVec16SE[1];
		fVec21SEState = fVec21SE[1];
		fVec22SEState = fVec22SE[1];
		fVec27SEState = fVec27SE[1];
		fVec28SEState = fVec28SE[1];
		fVec33SEState = fVec33SE[1];
		fVec34SEState = fVec34SE[1];
		fVec39SEState = fVec39SE[1];
		fVec40SEState = fVec40SE[1];
		fVec45SEState = fVec45SE[1];
		fVec46SEState = fVec46SE[1];
		fVec57SEState = fVec57SE[1];
		fVec55SEState = fVec55SE[1];
		fVec53SEState = fVec53SE[1];
		fVec51SEState = fVec51SE[1];
		fVec2SEState = fVec2SE[1];
		fVec1SEState = fVec1SE[1];
		fVec0SEState = fVec0SE[1];
		fVec73SEState = fVec73SE[1];
		fVec78SEState = fVec78SE[1];
		fVec79SEState = fVec79SE[1];
		fVec84SEState = fVec84SE[1];
		fVec85SEState = fVec85SE[1];
		fVec90SEState = fVec90SE[1];
		fVec91SEState = fVec91SE[1];
		fVec96SEState = fVec96SE[1];
		fVec97SEState = fVec97SE[1];
		fVec102SEState = fVec102SE[1];
		fVec103SEState = fVec103SE[1];
		fVec108SEState = fVec108SE[1];
		fVec109SEState = fVec109SE[1];
		fVec114SEState = fVec114SE[1];
		fVec115SEState = fVec115SE[1];
		fVec120SEState = fVec120SE[1];
		fVec121SEState = fVec121SE[1];
		fVec132SEState = fVec132SE[1];
		fVec130SEState = fVec130SE[1];
		fVec128SEState = fVec128SE[1];
		fVec126SEState = fVec126SE[1];
		fVec77SEState = fVec77SE[1];
		fVec76SEState = fVec76SE[1];
		fVec75SEState = fVec75SE[1];
		fVec148SEState = fVec148SE[1];
	}
};


