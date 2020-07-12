#include "MonomeModuleBase.hpp"
#include "rack.hpp"

using namespace rack;

struct TeletypeModule : MonomeModuleBase
{
    enum ParamIds
    {
        PARAM_PARAM,
        BUTTON_PARAM,
        NUM_PARAMS
    };
    enum InputIds
    {
        TRIG1_INPUT,
        TRIG2_INPUT,
        TRIG3_INPUT,
        TRIG4_INPUT,
        TRIG5_INPUT,
        TRIG6_INPUT,
        TRIG7_INPUT,
        TRIG8_INPUT,
        CV_INPUT,
        NUM_INPUTS
    };
    enum OutputIds
    {
        TRIGA_OUTPUT,
        TRIGB_OUTPUT,
        TRIGC_OUTPUT,
        TRIGD_OUTPUT,
        CV1_OUTPUT,
        CV2_OUTPUT,
        CV3_OUTPUT,
        CV4_OUTPUT,
        NUM_OUTPUTS
    };
    enum LightIds
    {
        TRIGA_LIGHT,
        TRIGB_LIGHT,
        TRIGC_LIGHT,
        TRIGD_LIGHT,
        CV1_LIGHT,
        CV2_LIGHT,
        CV3_LIGHT,
        CV4_LIGHT,
        NUM_LIGHTS
    };

    TeletypeModule();
    void processInputs() override;
    void processOutputs() override;
};
