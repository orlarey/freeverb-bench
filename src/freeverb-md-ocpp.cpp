//----------------------------------------------------------
// author: "RM"
// name: "freeverb"
// version: "0.0"
//
// Code generated with Faust 2.76.0 (https://faust.grame.fr)
//----------------------------------------------------------

/* link with  */
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
	float 	fConst0; // step: 16
	float 	fConst1; // step: 17
	// Recursion delay fVeeec3 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec3State; // Mono Delay
	FAUSTFLOAT 	fslider1;
	float 	fConst2; // step: 29
	FAUSTFLOAT 	fslider2;
	float 	fVec0[8192]; // Ring Delay
	int 	iConst3; // step: 43
	// Recursion delay fVeeec4 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec4State; // Mono Delay
	// Recursion delay fVeeec8 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec8State; // Mono Delay
	float 	fVec1[8192]; // Ring Delay
	int 	iConst4; // step: 58
	// Recursion delay fVeeec9 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec9State; // Mono Delay
	// Recursion delay fVeeec13 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec13State; // Mono Delay
	float 	fVec2[8192]; // Ring Delay
	int 	iConst5; // step: 74
	// Recursion delay fVeeec14 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec14State; // Mono Delay
	// Recursion delay fVeeec18 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec18State; // Mono Delay
	float 	fVec3[8192]; // Ring Delay
	int 	iConst6; // step: 90
	// Recursion delay fVeeec19 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec19State; // Mono Delay
	// Recursion delay fVeeec23 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec23State; // Mono Delay
	float 	fVec4[8192]; // Ring Delay
	int 	iConst7; // step: 106
	// Recursion delay fVeeec24 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec24State; // Mono Delay
	// Recursion delay fVeeec28 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec28State; // Mono Delay
	float 	fVec5[8192]; // Ring Delay
	int 	iConst8; // step: 122
	// Recursion delay fVeeec29 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec29State; // Mono Delay
	// Recursion delay fVeeec33 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec33State; // Mono Delay
	float 	fVec6[8192]; // Ring Delay
	int 	iConst9; // step: 138
	// Recursion delay fVeeec34 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec34State; // Mono Delay
	// Recursion delay fVeeec38 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec38State; // Mono Delay
	float 	fVec7[8192]; // Ring Delay
	int 	iConst10; // step: 154
	// Recursion delay fVeeec39 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec39State; // Mono Delay
	float 	fVec8[2048]; // Ring Delay
	// Recursion delay fRiiic16 is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec9[2048]; // Ring Delay
	// Recursion delay fRiiic17 is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec10[2048]; // Ring Delay
	// Recursion delay fRiiic18 is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec11[1024]; // Ring Delay
	int 	iConst11; // step: 187
	int 	iConst12; // step: 190
	// Recursion delay fVeeec46 is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec46State; // Single Delay
	int 	iConst13; // step: 195
	int 	iConst14; // step: 198
	// Recursion delay fVeeec0 is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec0State; // Single Delay
	int 	iConst15; // step: 203
	int 	iConst16; // step: 206
	// Recursion delay fVeeec1 is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec1State; // Single Delay
	int 	iConst17; // step: 211
	int 	iConst18; // step: 214
	// Recursion delay fVeeec2 is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec2State; // Single Delay
	FAUSTFLOAT 	fslider3;
	float 	fConst19; // step: 219
	// Recursion delay fVeeec54 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec54State; // Mono Delay
	float 	fVec12[8192]; // Ring Delay
	// Recursion delay fVeeec55 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec55State; // Mono Delay
	// Recursion delay fVeeec59 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec59State; // Mono Delay
	float 	fVec13[8192]; // Ring Delay
	// Recursion delay fVeeec60 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec60State; // Mono Delay
	// Recursion delay fVeeec64 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec64State; // Mono Delay
	float 	fVec14[8192]; // Ring Delay
	// Recursion delay fVeeec65 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec65State; // Mono Delay
	// Recursion delay fVeeec69 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec69State; // Mono Delay
	float 	fVec15[8192]; // Ring Delay
	// Recursion delay fVeeec70 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec70State; // Mono Delay
	// Recursion delay fVeeec74 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec74State; // Mono Delay
	float 	fVec16[8192]; // Ring Delay
	// Recursion delay fVeeec75 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec75State; // Mono Delay
	// Recursion delay fVeeec79 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec79State; // Mono Delay
	float 	fVec17[8192]; // Ring Delay
	// Recursion delay fVeeec80 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec80State; // Mono Delay
	// Recursion delay fVeeec84 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec84State; // Mono Delay
	float 	fVec18[8192]; // Ring Delay
	// Recursion delay fVeeec85 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec85State; // Mono Delay
	// Recursion delay fVeeec89 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec89State; // Mono Delay
	float 	fVec19[8192]; // Ring Delay
	// Recursion delay fVeeec90 is of type kMonoDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec90State; // Mono Delay
	float 	fVec20[2048]; // Ring Delay
	// Recursion delay fRiiic39 is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec21[2048]; // Ring Delay
	// Recursion delay fRiiic40 is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec22[2048]; // Ring Delay
	// Recursion delay fRiiic41 is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float 	fVec23[2048]; // Ring Delay
	// Recursion delay fVeeec97 is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec97State; // Single Delay
	// Recursion delay fVeeec51 is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec51State; // Single Delay
	// Recursion delay fVeeec52 is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec52State; // Single Delay
	// Recursion delay fVeeec53 is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float 	fVeeec53State; // Single Delay
	// Recursion delay fRiiic46 is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fRiiic47 is of type kZeroDelay
	// While its definition is of type kZeroDelay
	int 	IOTA;
	int fSampleRate;

  public:
	virtual void metadata(Meta* m) { 
		m->declare("author", "RM");
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
		fConst0 = min(1.92e+05f, max(1.0f, float(fSampleRate))); // step: 16
		fConst1 = (1.764e+04f / fConst0); // step: 17
		fConst2 = (12348.0f / fConst0); // step: 29
		iConst3 = int((0.025306122f * fConst0)); // step: 43
		iConst4 = int((0.026938776f * fConst0)); // step: 58
		iConst5 = int((0.028956916f * fConst0)); // step: 74
		iConst6 = int((0.030748298f * fConst0)); // step: 90
		iConst7 = int((0.0322449f * fConst0)); // step: 106
		iConst8 = int((0.033809524f * fConst0)); // step: 122
		iConst9 = int((0.035306122f * fConst0)); // step: 138
		iConst10 = int((0.036666665f * fConst0)); // step: 154
		iConst11 = int((0.0051020407f * fConst0)); // step: 187
		iConst12 = min(1024, max(0, (iConst11 + -1))); // step: 190
		iConst13 = int((0.0077324263f * fConst0)); // step: 195
		iConst14 = min(1024, max(0, (iConst13 + -1))); // step: 198
		iConst15 = int((0.01f * fConst0)); // step: 203
		iConst16 = min(1024, max(0, (iConst15 + -1))); // step: 206
		iConst17 = int((0.0126077095f * fConst0)); // step: 211
		iConst18 = min(1024, max(0, (iConst17 + -1))); // step: 214
		fConst19 = (0.0010430838f * fConst0); // step: 219
	}
	virtual void instanceResetUserInterface() {
		fslider0 = 0.5f;
		fslider1 = 0.5f;
		fslider2 = 0.3333f;
		fslider3 = 0.5f;
	}
	virtual void instanceClear() {
		fVeeec3State = 0;
		for (int i = 0; i < 8192; i++) { fVec0[i] = 0; }
		fVeeec4State = 0;
		fVeeec8State = 0;
		for (int i = 0; i < 8192; i++) { fVec1[i] = 0; }
		fVeeec9State = 0;
		fVeeec13State = 0;
		for (int i = 0; i < 8192; i++) { fVec2[i] = 0; }
		fVeeec14State = 0;
		fVeeec18State = 0;
		for (int i = 0; i < 8192; i++) { fVec3[i] = 0; }
		fVeeec19State = 0;
		fVeeec23State = 0;
		for (int i = 0; i < 8192; i++) { fVec4[i] = 0; }
		fVeeec24State = 0;
		fVeeec28State = 0;
		for (int i = 0; i < 8192; i++) { fVec5[i] = 0; }
		fVeeec29State = 0;
		fVeeec33State = 0;
		for (int i = 0; i < 8192; i++) { fVec6[i] = 0; }
		fVeeec34State = 0;
		fVeeec38State = 0;
		for (int i = 0; i < 8192; i++) { fVec7[i] = 0; }
		fVeeec39State = 0;
		for (int i = 0; i < 2048; i++) { fVec8[i] = 0; }
		for (int i = 0; i < 2048; i++) { fVec9[i] = 0; }
		for (int i = 0; i < 2048; i++) { fVec10[i] = 0; }
		for (int i = 0; i < 1024; i++) { fVec11[i] = 0; }
		fVeeec46State = 0;
		fVeeec0State = 0;
		fVeeec1State = 0;
		fVeeec2State = 0;
		fVeeec54State = 0;
		for (int i = 0; i < 8192; i++) { fVec12[i] = 0; }
		fVeeec55State = 0;
		fVeeec59State = 0;
		for (int i = 0; i < 8192; i++) { fVec13[i] = 0; }
		fVeeec60State = 0;
		fVeeec64State = 0;
		for (int i = 0; i < 8192; i++) { fVec14[i] = 0; }
		fVeeec65State = 0;
		fVeeec69State = 0;
		for (int i = 0; i < 8192; i++) { fVec15[i] = 0; }
		fVeeec70State = 0;
		fVeeec74State = 0;
		for (int i = 0; i < 8192; i++) { fVec16[i] = 0; }
		fVeeec75State = 0;
		fVeeec79State = 0;
		for (int i = 0; i < 8192; i++) { fVec17[i] = 0; }
		fVeeec80State = 0;
		fVeeec84State = 0;
		for (int i = 0; i < 8192; i++) { fVec18[i] = 0; }
		fVeeec85State = 0;
		fVeeec89State = 0;
		for (int i = 0; i < 8192; i++) { fVec19[i] = 0; }
		fVeeec90State = 0;
		for (int i = 0; i < 2048; i++) { fVec20[i] = 0; }
		for (int i = 0; i < 2048; i++) { fVec21[i] = 0; }
		for (int i = 0; i < 2048; i++) { fVec22[i] = 0; }
		for (int i = 0; i < 2048; i++) { fVec23[i] = 0; }
		fVeeec97State = 0;
		fVeeec51State = 0;
		fVeeec52State = 0;
		fVeeec53State = 0;
		IOTA = 23;
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
		float 	fSlow0 = (fConst1 * float(fslider0)); // step: 18
		float 	fSlow1 = (1.0f - fSlow0); // step: 21
		float 	fVeeec3;
		float 	fSlow2 = ((fConst2 * float(fslider1)) + 0.7f); // step: 31
		float 	fSlow3 = float(fslider2); // step: 34
		float 	fSlow4 = (0.1f * fSlow3); // step: 35
		float 	fVeeec4;
		float 	fVeeec8;
		float 	fVeeec9;
		float 	fVeeec13;
		float 	fVeeec14;
		float 	fVeeec18;
		float 	fVeeec19;
		float 	fVeeec23;
		float 	fVeeec24;
		float 	fVeeec28;
		float 	fVeeec29;
		float 	fVeeec33;
		float 	fVeeec34;
		float 	fVeeec38;
		float 	fVeeec39;
		float 	fVeeec46[2];
		float 	fVeeec0[2];
		float 	fVeeec1[2];
		float 	fVeeec2[2];
		int 	iSlow5 = int((fConst19 * float(fslider3))); // step: 221
		int 	iSlow6 = (iSlow5 + -1); // step: 222
		int 	iSlow7 = min(1024, max(0, (iConst11 + iSlow6))); // step: 225
		float 	fVeeec54;
		int 	iSlow8 = (iConst3 + iSlow5); // step: 238
		float 	fVeeec55;
		float 	fVeeec59;
		int 	iSlow9 = (iConst4 + iSlow5); // step: 251
		float 	fVeeec60;
		float 	fVeeec64;
		int 	iSlow10 = (iConst5 + iSlow5); // step: 265
		float 	fVeeec65;
		float 	fVeeec69;
		int 	iSlow11 = (iConst6 + iSlow5); // step: 279
		float 	fVeeec70;
		float 	fVeeec74;
		int 	iSlow12 = (iConst7 + iSlow5); // step: 293
		float 	fVeeec75;
		float 	fVeeec79;
		int 	iSlow13 = (iConst8 + iSlow5); // step: 307
		float 	fVeeec80;
		float 	fVeeec84;
		int 	iSlow14 = (iConst9 + iSlow5); // step: 321
		float 	fVeeec85;
		float 	fVeeec89;
		int 	iSlow15 = (iConst10 + iSlow5); // step: 335
		float 	fVeeec90;
		float 	fVeeec97[2];
		int 	iSlow16 = min(1024, max(0, (iConst13 + iSlow6))); // step: 368
		float 	fVeeec51[2];
		int 	iSlow17 = min(1024, max(0, (iConst15 + iSlow6))); // step: 373
		float 	fVeeec52[2];
		int 	iSlow18 = min(1024, max(0, (iConst17 + iSlow6))); // step: 378
		float 	fVeeec53[2];
		float 	fSlow19 = (1.0f - fSlow3); // step: 381
		int fullcount = count;
		for (int index = 0; index < fullcount; index += 32) {
			int count = min(32, fullcount-index);
			FAUSTFLOAT* input0 = &input[0][index]; // Zone 3
			FAUSTFLOAT* input1 = &input[1][index]; // Zone 3
			FAUSTFLOAT* output0 = &output[0][index]; // Zone 3
			FAUSTFLOAT* output1 = &output[1][index]; // Zone 3
			fVeeec3 = fVeeec3State;
			fVeeec4 = fVeeec4State;
			fVeeec8 = fVeeec8State;
			fVeeec9 = fVeeec9State;
			fVeeec13 = fVeeec13State;
			fVeeec14 = fVeeec14State;
			fVeeec18 = fVeeec18State;
			fVeeec19 = fVeeec19State;
			fVeeec23 = fVeeec23State;
			fVeeec24 = fVeeec24State;
			fVeeec28 = fVeeec28State;
			fVeeec29 = fVeeec29State;
			fVeeec33 = fVeeec33State;
			fVeeec34 = fVeeec34State;
			fVeeec38 = fVeeec38State;
			fVeeec39 = fVeeec39State;
			fVeeec46[1] = fVeeec46State;
			fVeeec0[1] = fVeeec0State;
			fVeeec1[1] = fVeeec1State;
			fVeeec2[1] = fVeeec2State;
			fVeeec54 = fVeeec54State;
			fVeeec55 = fVeeec55State;
			fVeeec59 = fVeeec59State;
			fVeeec60 = fVeeec60State;
			fVeeec64 = fVeeec64State;
			fVeeec65 = fVeeec65State;
			fVeeec69 = fVeeec69State;
			fVeeec70 = fVeeec70State;
			fVeeec74 = fVeeec74State;
			fVeeec75 = fVeeec75State;
			fVeeec79 = fVeeec79State;
			fVeeec80 = fVeeec80State;
			fVeeec84 = fVeeec84State;
			fVeeec85 = fVeeec85State;
			fVeeec89 = fVeeec89State;
			fVeeec90 = fVeeec90State;
			fVeeec97[1] = fVeeec97State;
			fVeeec51[1] = fVeeec51State;
			fVeeec52[1] = fVeeec52State;
			fVeeec53[1] = fVeeec53State;
			for (int i=0; i<count; i++) {
				float 	fTemp0 = fVeeec0[1]; // step: 2
				float 	fTemp1 = fVeeec1[1]; // step: 6
				float 	fTemp2 = fVeeec2[1]; // step: 7
				fVeeec3 = ((fSlow0 * fVeeec3) + (fSlow1 * fVeeec4));
				float 	fTemp3 = (float)input0[i]; // step: 36
				float 	fTemp4 = (float)input1[i]; // step: 37
				float 	fTemp5 = (fSlow4 * (fTemp3 + fTemp4)); // step: 39
				int vIota0 = IOTA&8191;
				fVec0[vIota0] = ((fSlow2 * fVeeec3) + fTemp5);
				int vIota1 = (IOTA-iConst3)&8191;
				fVeeec4 = fVec0[vIota1];
				fVeeec8 = ((fSlow0 * fVeeec8) + (fSlow1 * fVeeec9));
				fVec1[vIota0] = (fTemp5 + (fSlow2 * fVeeec8));
				int vIota2 = (IOTA-iConst4)&8191;
				fVeeec9 = fVec1[vIota2];
				fVeeec13 = ((fSlow0 * fVeeec13) + (fSlow1 * fVeeec14));
				fVec2[vIota0] = (fTemp5 + (fSlow2 * fVeeec13));
				int vIota3 = (IOTA-iConst5)&8191;
				fVeeec14 = fVec2[vIota3];
				fVeeec18 = ((fSlow0 * fVeeec18) + (fSlow1 * fVeeec19));
				fVec3[vIota0] = (fTemp5 + (fSlow2 * fVeeec18));
				int vIota4 = (IOTA-iConst6)&8191;
				fVeeec19 = fVec3[vIota4];
				fVeeec23 = ((fSlow0 * fVeeec23) + (fSlow1 * fVeeec24));
				fVec4[vIota0] = (fTemp5 + (fSlow2 * fVeeec23));
				int vIota5 = (IOTA-iConst7)&8191;
				fVeeec24 = fVec4[vIota5];
				fVeeec28 = ((fSlow0 * fVeeec28) + (fSlow1 * fVeeec29));
				fVec5[vIota0] = (fTemp5 + (fSlow2 * fVeeec28));
				int vIota6 = (IOTA-iConst8)&8191;
				fVeeec29 = fVec5[vIota6];
				fVeeec33 = ((fSlow0 * fVeeec33) + (fSlow1 * fVeeec34));
				fVec6[vIota0] = (fTemp5 + (fSlow2 * fVeeec33));
				int vIota7 = (IOTA-iConst9)&8191;
				fVeeec34 = fVec6[vIota7];
				fVeeec38 = ((fSlow0 * fVeeec38) + (fSlow1 * fVeeec39));
				fVec7[vIota0] = (fTemp5 + (fSlow2 * fVeeec38));
				int vIota8 = (IOTA-iConst10)&8191;
				fVeeec39 = fVec7[vIota8];
				float 	fTemp6 = ((((((((fVeeec4 + fVeeec9) + fVeeec14) + fVeeec19) + fVeeec24) + fVeeec29) + fVeeec34) + fVeeec39) + (0.5f * fTemp2)); // step: 160
				int vIota9 = IOTA&2047;
				fVec8[vIota9] = fTemp6;
				float 	fRiiic16 = -(0.5f * fVec8[vIota9]); // Zero delay
				float 	fTemp7 = (fTemp2 + (fRiiic16 + (0.5f * fTemp1))); // step: 167
				fVec9[vIota9] = fTemp7;
				float 	fRiiic17 = -(0.5f * fVec9[vIota9]); // Zero delay
				float 	fTemp8 = (fTemp1 + (fRiiic17 + (0.5f * fTemp0))); // step: 174
				fVec10[vIota9] = fTemp8;
				float 	fRiiic18 = -(0.5f * fVec10[vIota9]); // Zero delay
				float 	fTemp9 = fVeeec46[1]; // step: 179
				float 	fTemp10 = (fTemp0 + (fRiiic18 + (0.5f * fTemp9))); // step: 182
				int vIota10 = IOTA&1023;
				fVec11[vIota10] = fTemp10;
				int vIota11 = (IOTA-iConst12)&1023;
				fVeeec46[0] = fVec11[vIota11];
				int vIota12 = (IOTA-iConst14)&2047;
				fVeeec0[0] = fVec10[vIota12];
				int vIota13 = (IOTA-iConst16)&2047;
				fVeeec1[0] = fVec9[vIota13];
				int vIota14 = (IOTA-iConst18)&2047;
				fVeeec2[0] = fVec8[vIota14];
				float 	fTemp11 = fVeeec51[1]; // step: 226
				float 	fTemp12 = fVeeec52[1]; // step: 227
				float 	fTemp13 = fVeeec53[1]; // step: 228
				fVeeec54 = ((fSlow0 * fVeeec54) + (fSlow1 * fVeeec55));
				fVec12[vIota0] = (fTemp5 + (fSlow2 * fVeeec54));
				int vIota15 = (IOTA-iSlow8)&8191;
				fVeeec55 = fVec12[vIota15];
				fVeeec59 = ((fSlow0 * fVeeec59) + (fSlow1 * fVeeec60));
				fVec13[vIota0] = (fTemp5 + (fSlow2 * fVeeec59));
				int vIota16 = (IOTA-iSlow9)&8191;
				fVeeec60 = fVec13[vIota16];
				fVeeec64 = ((fSlow0 * fVeeec64) + (fSlow1 * fVeeec65));
				fVec14[vIota0] = (fTemp5 + (fSlow2 * fVeeec64));
				int vIota17 = (IOTA-iSlow10)&8191;
				fVeeec65 = fVec14[vIota17];
				fVeeec69 = ((fSlow0 * fVeeec69) + (fSlow1 * fVeeec70));
				fVec15[vIota0] = (fTemp5 + (fSlow2 * fVeeec69));
				int vIota18 = (IOTA-iSlow11)&8191;
				fVeeec70 = fVec15[vIota18];
				fVeeec74 = ((fSlow0 * fVeeec74) + (fSlow1 * fVeeec75));
				fVec16[vIota0] = (fTemp5 + (fSlow2 * fVeeec74));
				int vIota19 = (IOTA-iSlow12)&8191;
				fVeeec75 = fVec16[vIota19];
				fVeeec79 = ((fSlow0 * fVeeec79) + (fSlow1 * fVeeec80));
				fVec17[vIota0] = (fTemp5 + (fSlow2 * fVeeec79));
				int vIota20 = (IOTA-iSlow13)&8191;
				fVeeec80 = fVec17[vIota20];
				fVeeec84 = ((fSlow0 * fVeeec84) + (fSlow1 * fVeeec85));
				fVec18[vIota0] = (fTemp5 + (fSlow2 * fVeeec84));
				int vIota21 = (IOTA-iSlow14)&8191;
				fVeeec85 = fVec18[vIota21];
				fVeeec89 = ((fSlow0 * fVeeec89) + (fSlow1 * fVeeec90));
				fVec19[vIota0] = (fTemp5 + (fSlow2 * fVeeec89));
				int vIota22 = (IOTA-iSlow15)&8191;
				fVeeec90 = fVec19[vIota22];
				float 	fTemp14 = ((((((((fVeeec55 + fVeeec60) + fVeeec65) + fVeeec70) + fVeeec75) + fVeeec80) + fVeeec85) + fVeeec90) + (0.5f * fTemp13)); // step: 341
				fVec20[vIota9] = fTemp14;
				float 	fRiiic39 = -(0.5f * fVec20[vIota9]); // Zero delay
				float 	fTemp15 = (fTemp13 + (fRiiic39 + (0.5f * fTemp12))); // step: 348
				fVec21[vIota9] = fTemp15;
				float 	fRiiic40 = -(0.5f * fVec21[vIota9]); // Zero delay
				float 	fTemp16 = (fTemp12 + (fRiiic40 + (0.5f * fTemp11))); // step: 355
				fVec22[vIota9] = fTemp16;
				float 	fRiiic41 = -(0.5f * fVec22[vIota9]); // Zero delay
				float 	fTemp17 = fVeeec97[1]; // step: 360
				float 	fTemp18 = (fTemp11 + (fRiiic41 + (0.5f * fTemp17))); // step: 363
				fVec23[vIota9] = fTemp18;
				int vIota23 = (IOTA-iSlow7)&2047;
				fVeeec97[0] = fVec23[vIota23];
				int vIota24 = (IOTA-iSlow16)&2047;
				fVeeec51[0] = fVec22[vIota24];
				int vIota25 = (IOTA-iSlow17)&2047;
				fVeeec52[0] = fVec21[vIota25];
				int vIota26 = (IOTA-iSlow18)&2047;
				fVeeec53[0] = fVec20[vIota26];
				float 	fRiiic46 = -(0.5f * fVec11[vIota10]); // Zero delay
				float 	fRiiic47 = -(0.5f * fVec23[vIota9]); // Zero delay
				output0[i] = (FAUSTFLOAT)(((fSlow19 * fTemp3) + (fRiiic46 + fTemp9)));  // Zone Exec Code
				output1[i] = (FAUSTFLOAT)(((fRiiic47 + fTemp17) + (fSlow19 * fTemp4)));  // Zone Exec Code
				// post processing
				IOTA = IOTA+1;
				fVeeec53[1] = fVeeec53[0];
				fVeeec52[1] = fVeeec52[0];
				fVeeec51[1] = fVeeec51[0];
				fVeeec97[1] = fVeeec97[0];
				fVeeec2[1] = fVeeec2[0];
				fVeeec1[1] = fVeeec1[0];
				fVeeec0[1] = fVeeec0[0];
				fVeeec46[1] = fVeeec46[0];
			}
			fVeeec3State = fVeeec3;
			fVeeec4State = fVeeec4;
			fVeeec8State = fVeeec8;
			fVeeec9State = fVeeec9;
			fVeeec13State = fVeeec13;
			fVeeec14State = fVeeec14;
			fVeeec18State = fVeeec18;
			fVeeec19State = fVeeec19;
			fVeeec23State = fVeeec23;
			fVeeec24State = fVeeec24;
			fVeeec28State = fVeeec28;
			fVeeec29State = fVeeec29;
			fVeeec33State = fVeeec33;
			fVeeec34State = fVeeec34;
			fVeeec38State = fVeeec38;
			fVeeec39State = fVeeec39;
			fVeeec46State = fVeeec46[1];
			fVeeec0State = fVeeec0[1];
			fVeeec1State = fVeeec1[1];
			fVeeec2State = fVeeec2[1];
			fVeeec54State = fVeeec54;
			fVeeec55State = fVeeec55;
			fVeeec59State = fVeeec59;
			fVeeec60State = fVeeec60;
			fVeeec64State = fVeeec64;
			fVeeec65State = fVeeec65;
			fVeeec69State = fVeeec69;
			fVeeec70State = fVeeec70;
			fVeeec74State = fVeeec74;
			fVeeec75State = fVeeec75;
			fVeeec79State = fVeeec79;
			fVeeec80State = fVeeec80;
			fVeeec84State = fVeeec84;
			fVeeec85State = fVeeec85;
			fVeeec89State = fVeeec89;
			fVeeec90State = fVeeec90;
			fVeeec97State = fVeeec97[1];
			fVeeec51State = fVeeec51[1];
			fVeeec52State = fVeeec52[1];
			fVeeec53State = fVeeec53[1];
		}
	}
};


