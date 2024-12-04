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

class mydsp : public dsp
{
private:
	float fConst0KI; // step: 8
	float fConst1KI; // step: 11
	FAUSTFLOAT fslider0;
	FAUSTFLOAT fslider1;
	float fConst2KI; // step: 33
	// Recursion delay fVec1SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec1SEState; // Single Delay
	// Recursion delay fVec3SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec3SEState; // Single Delay
	FAUSTFLOAT fslider2;
	// Recursion delay fVec5SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec5SEState; // Single Delay
	// Recursion delay fVec9SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec9SEState;	  // Single Delay
	int iConst3KI;		  // step: 76
	int iConst4KI;		  // step: 77
	int IOTA0STATE;		  // IOTA for clock: 0x12d612600
	float fVec13SE[8192]; // Ring Delay
	float fVec14SE[8192]; // Ring Delay
	// Recursion delay fVec12SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec12SEState; // Single Delay
	// Recursion delay fVec0SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec0SEState; // Single Delay
	int iConst5KI;		// step: 96
	// Recursion delay fVec2SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec2SEState;	  // Single Delay
	float fVec20SE[8192]; // Ring Delay
	// Recursion delay fVec19SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec19SEState; // Single Delay
	// Recursion delay fVec4SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec4SEState;	  // Single Delay
	int iConst6KI;		  // step: 114
	float fVec26SE[8192]; // Ring Delay
	// Recursion delay fVec24SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec24SEState; // Single Delay
	// Recursion delay fVec8SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec8SEState;	  // Single Delay
	int iConst7KI;		  // step: 133
	float fVec33SE[8192]; // Ring Delay
	// Recursion delay fVec31SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec31SEState; // Single Delay
	// Recursion delay fVec11SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec11SEState; // Single Delay
	int iConst8KI;		 // step: 162
	// Recursion delay fVec38SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec38SEState; // Single Delay
	// Recursion delay fVec39SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec39SEState;  // Single Delay
	float fVec42SE[8192]; // Ring Delay
	float fConst9KI;	  // step: 180
	FAUSTFLOAT fslider3;
	// Recursion delay fVec43SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec43SEState; // Single Delay
	// Recursion delay fVec18SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec18SEState;  // Single Delay
	int iConst10KI;		  // step: 198
	float fVec51SE[8192]; // Ring Delay
	// Recursion delay fVec49SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec49SEState; // Single Delay
	// Recursion delay fVec23SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec23SEState;  // Single Delay
	int iConst11KI;		  // step: 223
	float fVec57SE[8192]; // Ring Delay
	float fVec58SE[8192]; // Ring Delay
	float fVec60SE[8192]; // Ring Delay
	// Recursion delay fVec30SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec30SEState; // Single Delay
	// Recursion delay fVec54SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec54SEState; // Single Delay
	// Recursion delay fVec36SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec36SEState; // Single Delay
	// Recursion delay fVec37SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec37SEState;  // Single Delay
	float fVec69SE[8192]; // Ring Delay
	// Recursion delay fVec65SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec65SEState; // Single Delay
	// Recursion delay fVec41SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec41SEState;  // Single Delay
	float fVec76SE[8192]; // Ring Delay
	// Recursion delay fRec25SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fVec73SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec73SEState; // Single Delay
	// Recursion delay fVec48SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec48SEState;  // Single Delay
	int iConst12KI;		  // step: 301
	int iConst13KI;		  // step: 304
	float fVec85SE[8192]; // Ring Delay
	// Recursion delay fVec80SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec80SEState; // Single Delay
	// Recursion delay fVec53SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec53SEState; // Single Delay
	// Recursion delay fRec30SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float fVec90SE[8192]; // Ring Delay
	int iConst14KI;		  // step: 339
	// Recursion delay fVec63SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec63SEState;  // Single Delay
	float fVec96SE[8192]; // Ring Delay
	int iConst15KI;		  // step: 352
	int iConst16KI;		  // step: 355
	// Recursion delay fRec32SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	// Recursion delay fVec72SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec72SEState;   // Single Delay
	float fVec99SE[2048];  // Ring Delay
	float fVec101SE[2048]; // Ring Delay
	float fVec102SE[8192]; // Ring Delay
	int iConst17KI;		   // step: 367
	// Recursion delay fVec79SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec79SEState; // Single Delay
	// Recursion delay fVec74SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec74SEState; // Single Delay
	int iConst18KI;		 // step: 380
	// Recursion delay fVec67SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec67SEState;   // Single Delay
	float fVec110SE[2048]; // Ring Delay
	// Recursion delay fVec87SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec87SEState; // Single Delay
	// Recursion delay fRec38SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	int iConst19KI;		   // step: 402
	float fVec116SE[1024]; // Ring Delay
	// Recursion delay fVec97SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec97SEState; // Single Delay
	// Recursion delay fRec40SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float fVec123SE[2048]; // Ring Delay
	float fVec94SEState;   // Single Delay
	// Recursion delay fVec108SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec108SEState; // Single Delay
	// Recursion delay fRec42SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float fVec129SE[2048]; // Ring Delay
	float fVec111SEState;  // Single Delay
	// Recursion delay fVec113SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec113SEState;  // Single Delay
	float fVec134SE[2048]; // Ring Delay
	float fVec137SEState;  // Single Delay
	// Recursion delay fVec120SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec120SEState; // Single Delay
	// Recursion delay fRec45SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float fVec139SE[2048]; // Ring Delay
	float fVec117SEState;  // Single Delay
	// Recursion delay fVec127SE is of type kSingleDelay
	// While its definition is of type kZeroDelay
	float fVec127SEState; // Single Delay
	// Recursion delay fRec47SE is of type kZeroDelay
	// While its definition is of type kZeroDelay
	float fVec124SEState; // Single Delay
	float fVec135SEState; // Single Delay
	float fVec146SEState; // Single Delay
	float fVec83SEState;  // Single Delay
	int fSampleRate;

public:
	virtual void metadata(Meta *m)
	{
		m->declare("author", "RM");
		m->declare("compile_options", "-lang ocpp -ct 1 -es 1 -mcl 4 -mcd 9 -mfs 1024 -irt 4 -fls 4 -udd 1 -mdd 1024 -mdy 33 -ss 2 -single -ftz 0");
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
	static void classInit(int sample_rate)
	{
	}
	virtual void instanceConstants(int sample_rate)
	{
		fSampleRate = sample_rate;
		fConst0KI = std::min(1.92e+05f, std::max(1.0f, float(fSampleRate))); // step: 8
		fConst1KI = (1.764e+04f / fConst0KI);								 // step: 11
		fConst2KI = (12348.0f / fConst0KI);									 // step: 33
		iConst3KI = int((0.026938776f * fConst0KI));						 // step: 76
		iConst4KI = int((0.025306122f * fConst0KI));						 // step: 77
		IOTA0STATE = 0;														 // init IOTA for clock: 0x12d612600
		iConst5KI = int((0.028956916f * fConst0KI));						 // step: 96
		iConst6KI = int((0.030748298f * fConst0KI));						 // step: 114
		iConst7KI = int((0.0322449f * fConst0KI));							 // step: 133
		iConst8KI = int((0.033809524f * fConst0KI));						 // step: 162
		fConst9KI = (0.0010430838f * fConst0KI);							 // step: 180
		iConst10KI = int((0.035306122f * fConst0KI));						 // step: 198
		iConst11KI = int((0.036666665f * fConst0KI));						 // step: 223
		iConst12KI = int((0.01f * fConst0KI));								 // step: 301
		iConst13KI = int((0.0126077095f * fConst0KI));						 // step: 304
		iConst14KI = int((0.0077324263f * fConst0KI));						 // step: 339
		iConst15KI = std::min(1024, std::max(0, (iConst12KI + -1)));		 // step: 352
		iConst16KI = std::min(1024, std::max(0, (iConst13KI + -1)));		 // step: 355
		iConst17KI = int((0.0051020407f * fConst0KI));						 // step: 367
		iConst18KI = std::min(1024, std::max(0, (iConst14KI + -1)));		 // step: 380
		iConst19KI = std::min(1024, std::max(0, (iConst17KI + -1)));		 // step: 402
	}
	virtual void instanceResetUserInterface()
	{
		fslider0 = 0.5f;
		fslider1 = 0.5f;
		fslider2 = 0.3333f;
		fslider3 = 0.5f;
	}
	virtual void instanceClear()
	{
		fVec1SEState = 0;
		fVec3SEState = 0;
		fVec5SEState = 0;
		fVec9SEState = 0;
		for (int i = 1; i < 8192; i++)
		{
			fVec13SE[i] = 0;
		}
		fVec13SE[0] = -1; // detect unintialized
		for (int i = 1; i < 8192; i++)
		{
			fVec14SE[i] = 0;
		}
		fVec14SE[0] = -1; // detect unintialized
		fVec12SEState = 0;
		fVec0SEState = 0;
		fVec2SEState = 0;
		for (int i = 1; i < 8192; i++)
		{
			fVec20SE[i] = 0;
		}
		fVec20SE[0] = -1; // detect unintialized
		fVec19SEState = 0;
		fVec4SEState = 0;
		for (int i = 1; i < 8192; i++)
		{
			fVec26SE[i] = 0;
		}
		fVec26SE[0] = -1; // detect unintialized
		fVec24SEState = 0;
		fVec8SEState = 0;
		for (int i = 1; i < 8192; i++)
		{
			fVec33SE[i] = 0;
		}
		fVec33SE[0] = -1; // detect unintialized
		fVec31SEState = 0;
		fVec11SEState = 0;
		fVec38SEState = 0;
		fVec39SEState = 0;
		for (int i = 1; i < 8192; i++)
		{
			fVec42SE[i] = 0;
		}
		fVec42SE[0] = -1; // detect unintialized
		fVec43SEState = 0;
		fVec18SEState = 0;
		for (int i = 1; i < 8192; i++)
		{
			fVec51SE[i] = 0;
		}
		fVec51SE[0] = -1; // detect unintialized
		fVec49SEState = 0;
		fVec23SEState = 0;
		for (int i = 1; i < 8192; i++)
		{
			fVec57SE[i] = 0;
		}
		fVec57SE[0] = -1; // detect unintialized
		for (int i = 1; i < 8192; i++)
		{
			fVec58SE[i] = 0;
		}
		fVec58SE[0] = -1; // detect unintialized
		for (int i = 1; i < 8192; i++)
		{
			fVec60SE[i] = 0;
		}
		fVec60SE[0] = -1; // detect unintialized
		fVec30SEState = 0;
		fVec54SEState = 0;
		fVec36SEState = 0;
		fVec37SEState = 0;
		for (int i = 1; i < 8192; i++)
		{
			fVec69SE[i] = 0;
		}
		fVec69SE[0] = -1; // detect unintialized
		fVec65SEState = 0;
		fVec41SEState = 0;
		for (int i = 1; i < 8192; i++)
		{
			fVec76SE[i] = 0;
		}
		fVec76SE[0] = -1; // detect unintialized
		fVec73SEState = 0;
		fVec48SEState = 0;
		for (int i = 1; i < 8192; i++)
		{
			fVec85SE[i] = 0;
		}
		fVec85SE[0] = -1; // detect unintialized
		fVec80SEState = 0;
		fVec53SEState = 0;
		for (int i = 1; i < 8192; i++)
		{
			fVec90SE[i] = 0;
		}
		fVec90SE[0] = -1; // detect unintialized
		fVec63SEState = 0;
		for (int i = 1; i < 8192; i++)
		{
			fVec96SE[i] = 0;
		}
		fVec96SE[0] = -1; // detect unintialized
		fVec72SEState = 0;
		for (int i = 1; i < 2048; i++)
		{
			fVec99SE[i] = 0;
		}
		fVec99SE[0] = -1; // detect unintialized
		for (int i = 1; i < 2048; i++)
		{
			fVec101SE[i] = 0;
		}
		fVec101SE[0] = -1; // detect unintialized
		for (int i = 1; i < 8192; i++)
		{
			fVec102SE[i] = 0;
		}
		fVec102SE[0] = -1; // detect unintialized
		fVec79SEState = 0;
		fVec74SEState = 0;
		fVec67SEState = 0;
		for (int i = 1; i < 2048; i++)
		{
			fVec110SE[i] = 0;
		}
		fVec110SE[0] = -1; // detect unintialized
		fVec87SEState = 0;
		for (int i = 1; i < 1024; i++)
		{
			fVec116SE[i] = 0;
		}
		fVec116SE[0] = -1; // detect unintialized
		fVec97SEState = 0;
		for (int i = 1; i < 2048; i++)
		{
			fVec123SE[i] = 0;
		}
		fVec123SE[0] = -1; // detect unintialized
		fVec94SEState = 0;
		fVec108SEState = 0;
		for (int i = 1; i < 2048; i++)
		{
			fVec129SE[i] = 0;
		}
		fVec129SE[0] = -1; // detect unintialized
		fVec111SEState = 0;
		fVec113SEState = 0;
		for (int i = 1; i < 2048; i++)
		{
			fVec134SE[i] = 0;
		}
		fVec134SE[0] = -1; // detect unintialized
		fVec137SEState = 0;
		fVec120SEState = 0;
		for (int i = 1; i < 2048; i++)
		{
			fVec139SE[i] = 0;
		}
		fVec139SE[0] = -1; // detect unintialized
		fVec117SEState = 0;
		fVec127SEState = 0;
		fVec124SEState = 0;
		fVec135SEState = 0;
		fVec146SEState = 0;
		fVec83SEState = 0;
	}
	virtual void init(int sample_rate)
	{
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	virtual void instanceInit(int sample_rate)
	{
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	virtual mydsp *clone()
	{
		return new mydsp();
	}
	virtual int getSampleRate()
	{
		return fSampleRate;
	}
	virtual void buildUserInterface(UI *ui_interface)
	{
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
	virtual void compute(int count, FAUSTFLOAT **input, FAUSTFLOAT **output)
	{
		int IOTA0 = IOTA0STATE; // recal IOTA STATE

		float fSlow0BE = (fConst1KI * float(fslider0)); // Zone 2, step: 14
		float fSlow1BE = (1.0f - fSlow0BE);				// Zone 2, step: 20
		float fVec1SE[2];
		float fTemp0SE; // step: 35
		float fVec3SE[2];
		float fSlow2BE = float(fslider2);						 // Zone 2, step: 39
		float fTemp1SE;											 // step: 42
		float fSlow3BE = ((fConst2KI * float(fslider1)) + 0.7f); // Zone 2, step: 53
		float fSlow4BE = (0.1f * fSlow2BE);						 // Zone 2, step: 54
		float fVec5SE[2];
		float fTemp2SE; // step: 61
		float fVec9SE[2];
		float fVec12SE[2];
		float fVec0SE[2];
		float fVec2SE[2];
		float fVec19SE[2];
		float fVec4SE[2];
		float fVec24SE[2];
		float fVec8SE[2];
		float fVec31SE[2];
		float fVec11SE[2];
		float fVec38SE[2];
		float fVec39SE[2];
		float fVec43SE[2];
		float fVec18SE[2];
		int iSlow5BE = int((fConst9KI * float(fslider3))); // Zone 2, step: 204
		float fVec49SE[2];
		int iSlow6BE = (iConst3KI + iSlow5BE); // Zone 2, step: 220
		float fVec23SE[2];
		int iSlow7BE = (iConst4KI + iSlow5BE); // Zone 2, step: 224
		float fVec30SE[2];
		float fVec54SE[2];
		float fVec36SE[2];
		int iSlow8BE = (iConst5KI + iSlow5BE); // Zone 2, step: 248
		float fVec37SE[2];
		float fTemp3SE; // step: 260
		float fVec65SE[2];
		float fVec41SE[2];
		int iSlow9BE = (iConst6KI + iSlow5BE); // Zone 2, step: 272
		float fVec73SE[2];
		float fVec48SE[2];
		float fTemp4SE;							// step: 300
		int iSlow10BE = (iConst7KI + iSlow5BE); // Zone 2, step: 302
		float fVec80SE[2];
		float fVec53SE[2];
		int iSlow11BE = (iConst8KI + iSlow5BE); // Zone 2, step: 322
		float fTemp5SE;							// step: 337
		float fVec63SE[2];
		int iSlow12BE = (iConst10KI + iSlow5BE); // Zone 2, step: 343
		float fVec72SE[2];
		int iSlow13BE = (iConst11KI + iSlow5BE); // Zone 2, step: 361
		float fVec79SE[2];
		float fVec74SE[2];
		float fVec67SE[2];
		float fTemp6SE;					 // step: 390
		int iSlow14BE = (iSlow5BE + -1); // Zone 2, step: 392
		float fTemp7SE;					 // step: 396
		float fVec87SE[2];
		float fTemp8SE; // step: 410
		float fVec97SE[2];
		int iSlow15BE = std::min(1024, std::max(0, (iConst13KI + iSlow14BE))); // Zone 2, step: 420
		float fTemp9SE;														   // step: 428
		float fVec94SE[2];
		float fVec108SE[2];
		int iSlow16BE = std::min(1024, std::max(0, (iConst12KI + iSlow14BE))); // Zone 2, step: 436
		float fVec111SE[2];
		float fVec113SE[2];
		int iSlow17BE = std::min(1024, std::max(0, (iConst14KI + iSlow14BE))); // Zone 2, step: 448
		float fVec137SE[2];
		float fTemp10SE; // step: 457
		float fVec120SE[2];
		int iSlow18BE = std::min(1024, std::max(0, (iConst17KI + iSlow14BE))); // Zone 2, step: 460
		float fVec117SE[2];
		float fVec127SE[2];
		float fSlow19BE = (1.0f - fSlow2BE); // Zone 2, step: 469
		float fVec124SE[2];
		float fVec135SE[2];
		float fVec146SE[2];
		float fVec83SE[2];
		FAUSTFLOAT *input0 = input[0];	 // Zone 3
		FAUSTFLOAT *input1 = input[1];	 // Zone 3
		FAUSTFLOAT *output0 = output[0]; // Zone 3
		FAUSTFLOAT *output1 = output[1]; // Zone 3
		fVec1SE[1] = fVec1SEState;
		fVec3SE[1] = fVec3SEState;
		fVec5SE[1] = fVec5SEState;
		fVec9SE[1] = fVec9SEState;
		fVec12SE[1] = fVec12SEState;
		fVec0SE[1] = fVec0SEState;
		fVec2SE[1] = fVec2SEState;
		fVec19SE[1] = fVec19SEState;
		fVec4SE[1] = fVec4SEState;
		fVec24SE[1] = fVec24SEState;
		fVec8SE[1] = fVec8SEState;
		fVec31SE[1] = fVec31SEState;
		fVec11SE[1] = fVec11SEState;
		fVec38SE[1] = fVec38SEState;
		fVec39SE[1] = fVec39SEState;
		fVec43SE[1] = fVec43SEState;
		fVec18SE[1] = fVec18SEState;
		fVec49SE[1] = fVec49SEState;
		fVec23SE[1] = fVec23SEState;
		fVec30SE[1] = fVec30SEState;
		fVec54SE[1] = fVec54SEState;
		fVec36SE[1] = fVec36SEState;
		fVec37SE[1] = fVec37SEState;
		fVec65SE[1] = fVec65SEState;
		fVec41SE[1] = fVec41SEState;
		fVec73SE[1] = fVec73SEState;
		fVec48SE[1] = fVec48SEState;
		fVec80SE[1] = fVec80SEState;
		fVec53SE[1] = fVec53SEState;
		fVec63SE[1] = fVec63SEState;
		fVec72SE[1] = fVec72SEState;
		fVec79SE[1] = fVec79SEState;
		fVec74SE[1] = fVec74SEState;
		fVec67SE[1] = fVec67SEState;
		fVec87SE[1] = fVec87SEState;
		fVec97SE[1] = fVec97SEState;
		fVec94SE[1] = fVec94SEState;
		fVec108SE[1] = fVec108SEState;
		fVec111SE[1] = fVec111SEState;
		fVec113SE[1] = fVec113SEState;
		fVec137SE[1] = fVec137SEState;
		fVec120SE[1] = fVec120SEState;
		fVec117SE[1] = fVec117SEState;
		fVec127SE[1] = fVec127SEState;
		fVec124SE[1] = fVec124SEState;
		fVec135SE[1] = fVec135SEState;
		fVec146SE[1] = fVec146SEState;
		fVec83SE[1] = fVec83SEState;
		for (int i = 0; i < count; i++)
		{
			fVec1SE[0] = ((fSlow0BE * fVec1SE[1]) + (fSlow1BE * fVec0SE[1]));
			fTemp0SE = (float)input1[i]; // step: 35
			fVec3SE[0] = ((fSlow0BE * fVec3SE[1]) + (fSlow1BE * fVec2SE[1]));
			fTemp1SE = (float)input0[i]; // step: 42
			fVec5SE[0] = ((fSlow0BE * fVec5SE[1]) + (fSlow1BE * fVec4SE[1]));
			fTemp2SE = (fSlow4BE * (fTemp1SE + fTemp0SE)); // step: 61
			fVec9SE[0] = ((fSlow0BE * fVec9SE[1]) + (fSlow1BE * fVec8SE[1]));
			fVec13SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec1SE[0]));
			fVec14SE[IOTA0 & 8191] = ((fSlow3BE * fVec3SE[0]) + fTemp2SE);
			fVec12SE[0] = ((fSlow0BE * fVec12SE[1]) + (fSlow1BE * fVec11SE[1]));
			fVec0SE[0] = fVec13SE[(IOTA0 - iConst3KI) & 8191];
			fVec2SE[0] = fVec14SE[(IOTA0 - iConst4KI) & 8191];
			fVec20SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec5SE[0]));
			fVec19SE[0] = ((fSlow0BE * fVec19SE[1]) + (fSlow1BE * fVec18SE[1]));
			fVec4SE[0] = fVec20SE[(IOTA0 - iConst5KI) & 8191];
			fVec26SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec9SE[0]));
			fVec24SE[0] = ((fSlow0BE * fVec24SE[1]) + (fSlow1BE * fVec23SE[1]));
			fVec8SE[0] = fVec26SE[(IOTA0 - iConst6KI) & 8191];
			fVec33SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec12SE[0]));
			fVec31SE[0] = ((fSlow0BE * fVec31SE[1]) + (fSlow1BE * fVec30SE[1]));
			fVec11SE[0] = fVec33SE[(IOTA0 - iConst7KI) & 8191];
			fVec38SE[0] = ((fSlow0BE * fVec38SE[1]) + (fSlow1BE * fVec36SE[1]));
			fVec39SE[0] = ((fSlow0BE * fVec39SE[1]) + (fSlow1BE * fVec37SE[1]));
			fVec42SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec19SE[0]));
			fVec43SE[0] = ((fSlow0BE * fVec43SE[1]) + (fSlow1BE * fVec41SE[1]));
			fVec18SE[0] = fVec42SE[(IOTA0 - iConst8KI) & 8191];
			fVec51SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec24SE[0]));
			fVec49SE[0] = ((fSlow0BE * fVec49SE[1]) + (fSlow1BE * fVec48SE[1]));
			fVec23SE[0] = fVec51SE[(IOTA0 - iConst10KI) & 8191];
			fVec57SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec31SE[0]));
			fVec58SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec38SE[0]));
			fVec60SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec39SE[0]));
			fVec30SE[0] = fVec57SE[(IOTA0 - iConst11KI) & 8191];
			fVec54SE[0] = ((fSlow0BE * fVec54SE[1]) + (fSlow1BE * fVec53SE[1]));
			fVec36SE[0] = fVec58SE[(IOTA0 - iSlow6BE) & 8191];
			fVec37SE[0] = fVec60SE[(IOTA0 - iSlow7BE) & 8191];
			fVec69SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec43SE[0]));
			fTemp3SE = ((((((((fVec2SE[0] + fVec0SE[0]) + fVec4SE[0]) + fVec8SE[0]) + fVec11SE[0]) + fVec18SE[0]) + fVec23SE[0]) + fVec30SE[0]) + (0.5f * fVec67SE[1])); // step: 260
			fVec65SE[0] = ((fSlow0BE * fVec65SE[1]) + (fSlow1BE * fVec63SE[1]));
			fVec41SE[0] = fVec69SE[(IOTA0 - iSlow8BE) & 8191];
			fVec76SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec49SE[0]));
			float fRec25SE = -(0.5f * fTemp3SE); // Zero delay
			fVec73SE[0] = ((fSlow0BE * fVec73SE[1]) + (fSlow1BE * fVec72SE[1]));
			fVec48SE[0] = fVec76SE[(IOTA0 - iSlow9BE) & 8191];
			fTemp4SE = (fVec83SE[1] + (fRec25SE + (0.5f * fVec74SE[1]))); // step: 300
			fVec85SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec54SE[0]));
			fVec80SE[0] = ((fSlow0BE * fVec80SE[1]) + (fSlow1BE * fVec79SE[1]));
			fVec53SE[0] = fVec85SE[(IOTA0 - iSlow10BE) & 8191];
			float fRec30SE = -(0.5f * fTemp4SE); // Zero delay
			fVec90SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec65SE[0]));
			fTemp5SE = (fVec94SE[1] + (fRec30SE + (0.5f * fVec87SE[1]))); // step: 337
			fVec63SE[0] = fVec90SE[(IOTA0 - iSlow11BE) & 8191];
			fVec96SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec73SE[0]));
			float fRec32SE = -(0.5f * fTemp5SE); // Zero delay
			fVec72SE[0] = fVec96SE[(IOTA0 - iSlow12BE) & 8191];
			fVec99SE[IOTA0 & 2047] = fTemp4SE;
			fVec101SE[IOTA0 & 2047] = fTemp3SE;
			fVec102SE[IOTA0 & 8191] = (fTemp2SE + (fSlow3BE * fVec80SE[0]));
			fVec79SE[0] = fVec102SE[(IOTA0 - iSlow13BE) & 8191];
			fVec74SE[0] = fVec99SE[(IOTA0 - iConst15KI) & 2047];
			fVec67SE[0] = fVec101SE[(IOTA0 - iConst16KI) & 2047];
			fVec110SE[IOTA0 & 2047] = fTemp5SE;
			fTemp6SE = ((((((((fVec37SE[0] + fVec36SE[0]) + fVec41SE[0]) + fVec48SE[0]) + fVec53SE[0]) + fVec63SE[0]) + fVec72SE[0]) + fVec79SE[0]) + (0.5f * fVec108SE[1])); // step: 390
			fTemp7SE = (fVec111SE[1] + (fRec32SE + (0.5f * fVec97SE[1])));																									  // step: 396
			fVec87SE[0] = fVec110SE[(IOTA0 - iConst18KI) & 2047];
			float fRec38SE = -(0.5f * fTemp6SE); // Zero delay
			fVec116SE[IOTA0 & 1023] = fTemp7SE;
			fTemp8SE = (fVec117SE[1] + (fRec38SE + (0.5f * fVec113SE[1]))); // step: 410
			fVec97SE[0] = fVec116SE[(IOTA0 - iConst19KI) & 1023];
			float fRec40SE = -(0.5f * fTemp8SE); // Zero delay
			fVec123SE[IOTA0 & 2047] = fTemp6SE;
			fTemp9SE = (fVec124SE[1] + (fRec40SE + (0.5f * fVec120SE[1]))); // step: 428
			fVec94SE[0] = fVec74SE[0];
			fVec108SE[0] = fVec123SE[(IOTA0 - iSlow15BE) & 2047];
			float fRec42SE = -(0.5f * fTemp9SE); // Zero delay
			fVec129SE[IOTA0 & 2047] = fTemp8SE;
			fVec111SE[0] = fVec87SE[0];
			fVec113SE[0] = fVec129SE[(IOTA0 - iSlow16BE) & 2047];
			fVec134SE[IOTA0 & 2047] = fTemp9SE;
			fVec137SE[0] = fVec97SE[0];
			fTemp10SE = (fVec135SE[1] + (fRec42SE + (0.5f * fVec127SE[1]))); // step: 457
			fVec120SE[0] = fVec134SE[(IOTA0 - iSlow17BE) & 2047];
			float fRec45SE = -(0.5f * fTemp7SE); // Zero delay
			fVec139SE[IOTA0 & 2047] = fTemp10SE;
			fVec117SE[0] = fVec108SE[0];
			fVec127SE[0] = fVec139SE[(IOTA0 - iSlow18BE) & 2047];
			float fRec47SE = -(0.5f * fTemp10SE); // Zero delay
			fVec124SE[0] = fVec113SE[0];
			fVec135SE[0] = fVec120SE[0];
			fVec146SE[0] = fVec127SE[0];
			fVec83SE[0] = fVec67SE[0];
			output0[i] = (FAUSTFLOAT)(((fRec45SE + fVec137SE[1]) + (fSlow19BE * fTemp1SE))); // Zone Exec Code
			output1[i] = (FAUSTFLOAT)(((fSlow19BE * fTemp0SE) + (fRec47SE + fVec146SE[1]))); // Zone Exec Code
			// post processing
			fVec83SE[1] = fVec83SE[0];
			fVec146SE[1] = fVec146SE[0];
			fVec135SE[1] = fVec135SE[0];
			fVec124SE[1] = fVec124SE[0];
			fVec127SE[1] = fVec127SE[0];
			fVec117SE[1] = fVec117SE[0];
			fVec120SE[1] = fVec120SE[0];
			fVec137SE[1] = fVec137SE[0];
			fVec113SE[1] = fVec113SE[0];
			fVec111SE[1] = fVec111SE[0];
			fVec108SE[1] = fVec108SE[0];
			fVec94SE[1] = fVec94SE[0];
			fVec97SE[1] = fVec97SE[0];
			fVec87SE[1] = fVec87SE[0];
			fVec67SE[1] = fVec67SE[0];
			fVec74SE[1] = fVec74SE[0];
			fVec79SE[1] = fVec79SE[0];
			fVec72SE[1] = fVec72SE[0];
			fVec63SE[1] = fVec63SE[0];
			fVec53SE[1] = fVec53SE[0];
			fVec80SE[1] = fVec80SE[0];
			fVec48SE[1] = fVec48SE[0];
			fVec73SE[1] = fVec73SE[0];
			fVec41SE[1] = fVec41SE[0];
			fVec65SE[1] = fVec65SE[0];
			fVec37SE[1] = fVec37SE[0];
			fVec36SE[1] = fVec36SE[0];
			fVec54SE[1] = fVec54SE[0];
			fVec30SE[1] = fVec30SE[0];
			fVec23SE[1] = fVec23SE[0];
			fVec49SE[1] = fVec49SE[0];
			fVec18SE[1] = fVec18SE[0];
			fVec43SE[1] = fVec43SE[0];
			fVec39SE[1] = fVec39SE[0];
			fVec38SE[1] = fVec38SE[0];
			fVec11SE[1] = fVec11SE[0];
			fVec31SE[1] = fVec31SE[0];
			fVec8SE[1] = fVec8SE[0];
			fVec24SE[1] = fVec24SE[0];
			fVec4SE[1] = fVec4SE[0];
			fVec19SE[1] = fVec19SE[0];
			fVec2SE[1] = fVec2SE[0];
			fVec0SE[1] = fVec0SE[0];
			fVec12SE[1] = fVec12SE[0];
			++IOTA0; // inc IOTA for clock: 0x12d612600
			fVec9SE[1] = fVec9SE[0];
			fVec5SE[1] = fVec5SE[0];
			fVec3SE[1] = fVec3SE[0];
			fVec1SE[1] = fVec1SE[0];
		}
		fVec1SEState = fVec1SE[1];
		fVec3SEState = fVec3SE[1];
		fVec5SEState = fVec5SE[1];
		fVec9SEState = fVec9SE[1];
		fVec12SEState = fVec12SE[1];
		fVec0SEState = fVec0SE[1];
		fVec2SEState = fVec2SE[1];
		fVec19SEState = fVec19SE[1];
		fVec4SEState = fVec4SE[1];
		fVec24SEState = fVec24SE[1];
		fVec8SEState = fVec8SE[1];
		fVec31SEState = fVec31SE[1];
		fVec11SEState = fVec11SE[1];
		fVec38SEState = fVec38SE[1];
		fVec39SEState = fVec39SE[1];
		fVec43SEState = fVec43SE[1];
		fVec18SEState = fVec18SE[1];
		fVec49SEState = fVec49SE[1];
		fVec23SEState = fVec23SE[1];
		fVec30SEState = fVec30SE[1];
		fVec54SEState = fVec54SE[1];
		fVec36SEState = fVec36SE[1];
		fVec37SEState = fVec37SE[1];
		fVec65SEState = fVec65SE[1];
		fVec41SEState = fVec41SE[1];
		fVec73SEState = fVec73SE[1];
		fVec48SEState = fVec48SE[1];
		fVec80SEState = fVec80SE[1];
		fVec53SEState = fVec53SE[1];
		fVec63SEState = fVec63SE[1];
		fVec72SEState = fVec72SE[1];
		fVec79SEState = fVec79SE[1];
		fVec74SEState = fVec74SE[1];
		fVec67SEState = fVec67SE[1];
		fVec87SEState = fVec87SE[1];
		fVec97SEState = fVec97SE[1];
		fVec94SEState = fVec94SE[1];
		fVec108SEState = fVec108SE[1];
		fVec111SEState = fVec111SE[1];
		fVec113SEState = fVec113SE[1];
		fVec137SEState = fVec137SE[1];
		fVec120SEState = fVec120SE[1];
		fVec117SEState = fVec117SE[1];
		fVec127SEState = fVec127SE[1];
		fVec124SEState = fVec124SE[1];
		fVec135SEState = fVec135SE[1];
		fVec146SEState = fVec146SE[1];
		fVec83SEState = fVec83SE[1];
		IOTA0STATE = IOTA0; // save IOTA STATE
	}
};
