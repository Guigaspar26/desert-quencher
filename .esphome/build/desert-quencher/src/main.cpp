// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
alignas(logger::Logger) static unsigned char logger__logger_logger_id__pstorage[sizeof(logger::Logger)];
static logger::Logger *const logger_logger_id = reinterpret_cast<logger::Logger *>(logger__logger_logger_id__pstorage);
#ifndef __PICOLIBC__
using std::isnan;
#endif
using std::min;
using std::max;
#include <new>
using namespace switch_;
using namespace number;
using namespace sensor;
alignas(wifi::WiFiComponent) static unsigned char wifi__wifi_wificomponent_id__pstorage[sizeof(wifi::WiFiComponent)];
static wifi::WiFiComponent *const wifi_wificomponent_id = reinterpret_cast<wifi::WiFiComponent *>(wifi__wifi_wificomponent_id__pstorage);
alignas(mdns::MDNSComponent) static unsigned char mdns__mdns_mdnscomponent_id__pstorage[sizeof(mdns::MDNSComponent)];
static mdns::MDNSComponent *const mdns_mdnscomponent_id = reinterpret_cast<mdns::MDNSComponent *>(mdns__mdns_mdnscomponent_id__pstorage);
alignas(esphome::ESPHomeOTAComponent) static unsigned char esphome__esphome_esphomeotacomponent_id__pstorage[sizeof(esphome::ESPHomeOTAComponent)];
static esphome::ESPHomeOTAComponent *const esphome_esphomeotacomponent_id = reinterpret_cast<esphome::ESPHomeOTAComponent *>(esphome__esphome_esphomeotacomponent_id__pstorage);
alignas(preferences::IntervalSyncer) static unsigned char preferences__preferences_intervalsyncer_id__pstorage[sizeof(preferences::IntervalSyncer)];
static preferences::IntervalSyncer *const preferences_intervalsyncer_id = reinterpret_cast<preferences::IntervalSyncer *>(preferences__preferences_intervalsyncer_id__pstorage);
alignas(safe_mode::SafeModeComponent) static unsigned char safe_mode__safe_mode_safemodecomponent_id__pstorage[sizeof(safe_mode::SafeModeComponent)];
static safe_mode::SafeModeComponent *const safe_mode_safemodecomponent_id = reinterpret_cast<safe_mode::SafeModeComponent *>(safe_mode__safe_mode_safemodecomponent_id__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id_2__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id_2 = reinterpret_cast<Automation<> *>(esphome__automation_id_2__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_3__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_3 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_3__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id_3__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id_3 = reinterpret_cast<Automation<> *>(esphome__automation_id_3__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_4__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_4 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_4__pstorage);
alignas(api::APIServer) static unsigned char api__api_apiserver_id__pstorage[sizeof(api::APIServer)];
static api::APIServer *const api_apiserver_id = reinterpret_cast<api::APIServer *>(api__api_apiserver_id__pstorage);
using namespace api;
alignas(StartupTrigger) static unsigned char esphome__startuptrigger_id__pstorage[sizeof(StartupTrigger)];
static StartupTrigger *const startuptrigger_id = reinterpret_cast<StartupTrigger *>(esphome__startuptrigger_id__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id = reinterpret_cast<Automation<> *>(esphome__automation_id__pstorage);
alignas(deep_sleep::DeepSleepComponent) static unsigned char deep_sleep__deep_sleep_1__pstorage[sizeof(deep_sleep::DeepSleepComponent)];
static deep_sleep::DeepSleepComponent *const deep_sleep_1 = reinterpret_cast<deep_sleep::DeepSleepComponent *>(deep_sleep__deep_sleep_1__pstorage);
alignas(gpio::GPIOSwitch) static unsigned char gpio__valve__pstorage[sizeof(gpio::GPIOSwitch)];
static gpio::GPIOSwitch *const valve = reinterpret_cast<gpio::GPIOSwitch *>(gpio__valve__pstorage);
alignas(esp32::ESP32InternalGPIOPin) static unsigned char esp32__esp32_esp32internalgpiopin_id__pstorage[sizeof(esp32::ESP32InternalGPIOPin)];
static esp32::ESP32InternalGPIOPin *const esp32_esp32internalgpiopin_id = reinterpret_cast<esp32::ESP32InternalGPIOPin *>(esp32__esp32_esp32internalgpiopin_id__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id_4__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id_4 = reinterpret_cast<Automation<> *>(esphome__automation_id_4__pstorage);
alignas(template_::TemplateSwitch) static unsigned char template__prevent_deep_sleep__pstorage[sizeof(template_::TemplateSwitch)];
static template_::TemplateSwitch *const prevent_deep_sleep = reinterpret_cast<template_::TemplateSwitch *>(template__prevent_deep_sleep__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id_7__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id_7 = reinterpret_cast<Automation<> *>(esphome__automation_id_7__pstorage);
alignas(deep_sleep::AllowDeepSleepAction<>) static unsigned char deep_sleep__deep_sleep_allowdeepsleepaction_id__pstorage[sizeof(deep_sleep::AllowDeepSleepAction<>)];
static deep_sleep::AllowDeepSleepAction<> *const deep_sleep_allowdeepsleepaction_id = reinterpret_cast<deep_sleep::AllowDeepSleepAction<> *>(deep_sleep__deep_sleep_allowdeepsleepaction_id__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id_6__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id_6 = reinterpret_cast<Automation<> *>(esphome__automation_id_6__pstorage);
alignas(deep_sleep::PreventDeepSleepAction<>) static unsigned char deep_sleep__deep_sleep_preventdeepsleepaction_id__pstorage[sizeof(deep_sleep::PreventDeepSleepAction<>)];
static deep_sleep::PreventDeepSleepAction<> *const deep_sleep_preventdeepsleepaction_id = reinterpret_cast<deep_sleep::PreventDeepSleepAction<> *>(deep_sleep__deep_sleep_preventdeepsleepaction_id__pstorage);
alignas(template_::TemplateSwitch) static unsigned char template__manual_override_switch__pstorage[sizeof(template_::TemplateSwitch)];
static template_::TemplateSwitch *const manual_override_switch = reinterpret_cast<template_::TemplateSwitch *>(template__manual_override_switch__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__watering_period_num__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const watering_period_num = reinterpret_cast<template_::TemplateNumber *>(template__watering_period_num__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__sleep_duration_num__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const sleep_duration_num = reinterpret_cast<template_::TemplateNumber *>(template__sleep_duration_num__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__valve_duration_num__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const valve_duration_num = reinterpret_cast<template_::TemplateNumber *>(template__valve_duration_num__pstorage);
alignas(template_::TemplateSensor) static unsigned char template__wakes_remaining__pstorage[sizeof(template_::TemplateSensor)];
static template_::TemplateSensor *const wakes_remaining = reinterpret_cast<template_::TemplateSensor *>(template__wakes_remaining__pstorage);
alignas(wifi_signal::WiFiSignalSensor) static unsigned char wifi_signal__wifi_signal_wifisignalsensor_id__pstorage[sizeof(wifi_signal::WiFiSignalSensor)];
static wifi_signal::WiFiSignalSensor *const wifi_signal_wifisignalsensor_id = reinterpret_cast<wifi_signal::WiFiSignalSensor *>(wifi_signal__wifi_signal_wifisignalsensor_id__pstorage);
alignas(script::SingleScript<>) static unsigned char script__evaluate_and_water__pstorage[sizeof(script::SingleScript<>)];
static script::SingleScript<> *const evaluate_and_water = reinterpret_cast<script::SingleScript<> *>(script__evaluate_and_water__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id_13__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id_13 = reinterpret_cast<Automation<> *>(esphome__automation_id_13__pstorage);
alignas(globals::RestoringGlobalsComponent<int>) static unsigned char globals__wake_count__pstorage[sizeof(globals::RestoringGlobalsComponent<int>)];
static globals::RestoringGlobalsComponent<int> *const wake_count = reinterpret_cast<globals::RestoringGlobalsComponent<int> *>(globals__wake_count__pstorage);
alignas(globals::RestoringGlobalsComponent<int>) static unsigned char globals__watering_period__pstorage[sizeof(globals::RestoringGlobalsComponent<int>)];
static globals::RestoringGlobalsComponent<int> *const watering_period = reinterpret_cast<globals::RestoringGlobalsComponent<int> *>(globals__watering_period__pstorage);
alignas(globals::RestoringGlobalsComponent<int>) static unsigned char globals__valve_duration_s__pstorage[sizeof(globals::RestoringGlobalsComponent<int>)];
static globals::RestoringGlobalsComponent<int> *const valve_duration_s = reinterpret_cast<globals::RestoringGlobalsComponent<int> *>(globals__valve_duration_s__pstorage);
alignas(globals::RestoringGlobalsComponent<bool>) static unsigned char globals__manual_override__pstorage[sizeof(globals::RestoringGlobalsComponent<bool>)];
static globals::RestoringGlobalsComponent<bool> *const manual_override = reinterpret_cast<globals::RestoringGlobalsComponent<bool> *>(globals__manual_override__pstorage);
alignas(globals::RestoringGlobalsComponent<int>) static unsigned char globals__sleep_duration_min__pstorage[sizeof(globals::RestoringGlobalsComponent<int>)];
static globals::RestoringGlobalsComponent<int> *const sleep_duration_min = reinterpret_cast<globals::RestoringGlobalsComponent<int> *>(globals__sleep_duration_min__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id_9__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id_9 = reinterpret_cast<Automation<> *>(esphome__automation_id_9__pstorage);
alignas(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>>) static unsigned char globals__globals_globalvarsetaction_id_2__pstorage[sizeof(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>>)];
static globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>> *const globals_globalvarsetaction_id_2 = reinterpret_cast<globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>> *>(globals__globals_globalvarsetaction_id_2__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_8__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_8 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_8__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id_8__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id_8 = reinterpret_cast<Automation<> *>(esphome__automation_id_8__pstorage);
alignas(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>>) static unsigned char globals__globals_globalvarsetaction_id__pstorage[sizeof(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>>)];
static globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>> *const globals_globalvarsetaction_id = reinterpret_cast<globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>> *>(globals__globals_globalvarsetaction_id__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_7__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_7 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_7__pstorage);
alignas(Automation<float>) static unsigned char esphome__automation_id_10__pstorage[sizeof(Automation<float>)];
static Automation<float> *const automation_id_10 = reinterpret_cast<Automation<float> *>(esphome__automation_id_10__pstorage);
alignas(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float>) static unsigned char globals__globals_globalvarsetaction_id_3__pstorage[sizeof(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float>)];
static globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float> *const globals_globalvarsetaction_id_3 = reinterpret_cast<globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float> *>(globals__globals_globalvarsetaction_id_3__pstorage);
alignas(StatelessLambdaAction<float>) static unsigned char esphome__lambdaaction_id_9__pstorage[sizeof(StatelessLambdaAction<float>)];
static StatelessLambdaAction<float> *const lambdaaction_id_9 = reinterpret_cast<StatelessLambdaAction<float> *>(esphome__lambdaaction_id_9__pstorage);
alignas(Automation<float>) static unsigned char esphome__automation_id_11__pstorage[sizeof(Automation<float>)];
static Automation<float> *const automation_id_11 = reinterpret_cast<Automation<float> *>(esphome__automation_id_11__pstorage);
alignas(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float>) static unsigned char globals__globals_globalvarsetaction_id_4__pstorage[sizeof(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float>)];
static globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float> *const globals_globalvarsetaction_id_4 = reinterpret_cast<globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float> *>(globals__globals_globalvarsetaction_id_4__pstorage);
alignas(StatelessLambdaAction<float>) static unsigned char esphome__lambdaaction_id_10__pstorage[sizeof(StatelessLambdaAction<float>)];
static StatelessLambdaAction<float> *const lambdaaction_id_10 = reinterpret_cast<StatelessLambdaAction<float> *>(esphome__lambdaaction_id_10__pstorage);
alignas(Automation<float>) static unsigned char esphome__automation_id_12__pstorage[sizeof(Automation<float>)];
static Automation<float> *const automation_id_12 = reinterpret_cast<Automation<float> *>(esphome__automation_id_12__pstorage);
alignas(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float>) static unsigned char globals__globals_globalvarsetaction_id_5__pstorage[sizeof(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float>)];
static globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float> *const globals_globalvarsetaction_id_5 = reinterpret_cast<globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float> *>(globals__globals_globalvarsetaction_id_5__pstorage);
alignas(StatelessLambdaAction<float>) static unsigned char esphome__lambdaaction_id_11__pstorage[sizeof(StatelessLambdaAction<float>)];
static StatelessLambdaAction<float> *const lambdaaction_id_11 = reinterpret_cast<StatelessLambdaAction<float> *>(esphome__lambdaaction_id_11__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_12__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_12 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_12__pstorage);
alignas(UpdateComponentAction<>) static unsigned char esphome__updatecomponentaction_id__pstorage[sizeof(UpdateComponentAction<>)];
static UpdateComponentAction<> *const updatecomponentaction_id = reinterpret_cast<UpdateComponentAction<> *>(esphome__updatecomponentaction_id__pstorage);
alignas(UpdateComponentAction<>) static unsigned char esphome__updatecomponentaction_id_2__pstorage[sizeof(UpdateComponentAction<>)];
static UpdateComponentAction<> *const updatecomponentaction_id_2 = reinterpret_cast<UpdateComponentAction<> *>(esphome__updatecomponentaction_id_2__pstorage);
alignas(UpdateComponentAction<>) static unsigned char esphome__updatecomponentaction_id_3__pstorage[sizeof(UpdateComponentAction<>)];
static UpdateComponentAction<> *const updatecomponentaction_id_3 = reinterpret_cast<UpdateComponentAction<> *>(esphome__updatecomponentaction_id_3__pstorage);
alignas(UpdateComponentAction<>) static unsigned char esphome__updatecomponentaction_id_4__pstorage[sizeof(UpdateComponentAction<>)];
static UpdateComponentAction<> *const updatecomponentaction_id_4 = reinterpret_cast<UpdateComponentAction<> *>(esphome__updatecomponentaction_id_4__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_13__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_13 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_13__pstorage);
alignas(StatelessLambdaCondition<>) static unsigned char esphome__lambdacondition_id__pstorage[sizeof(StatelessLambdaCondition<>)];
static StatelessLambdaCondition<> *const lambdacondition_id = reinterpret_cast<StatelessLambdaCondition<> *>(esphome__lambdacondition_id__pstorage);
alignas(IfAction<true>) static unsigned char esphome__ifaction_id__pstorage[sizeof(IfAction<true>)];
static IfAction<true> *const ifaction_id = reinterpret_cast<IfAction<true> *>(esphome__ifaction_id__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_14__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_14 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_14__pstorage);
alignas(switch_::TurnOnAction<>) static unsigned char switch__switch__turnonaction_id__pstorage[sizeof(switch_::TurnOnAction<>)];
static switch_::TurnOnAction<> *const switch__turnonaction_id = reinterpret_cast<switch_::TurnOnAction<> *>(switch__switch__turnonaction_id__pstorage);
alignas(DelayAction<>) static unsigned char esphome__delayaction_id_2__pstorage[sizeof(DelayAction<>)];
static DelayAction<> *const delayaction_id_2 = reinterpret_cast<DelayAction<> *>(esphome__delayaction_id_2__pstorage);
alignas(switch_::TurnOffAction<>) static unsigned char switch__switch__turnoffaction_id__pstorage[sizeof(switch_::TurnOffAction<>)];
static switch_::TurnOffAction<> *const switch__turnoffaction_id = reinterpret_cast<switch_::TurnOffAction<> *>(switch__switch__turnoffaction_id__pstorage);
alignas(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>>) static unsigned char globals__globals_globalvarsetaction_id_6__pstorage[sizeof(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>>)];
static globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>> *const globals_globalvarsetaction_id_6 = reinterpret_cast<globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>> *>(globals__globals_globalvarsetaction_id_6__pstorage);
alignas(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>>) static unsigned char globals__globals_globalvarsetaction_id_7__pstorage[sizeof(globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>>)];
static globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>> *const globals_globalvarsetaction_id_7 = reinterpret_cast<globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>> *>(globals__globals_globalvarsetaction_id_7__pstorage);
alignas(switch_::SwitchPublishAction<>) static unsigned char switch__switch__switchpublishaction_id__pstorage[sizeof(switch_::SwitchPublishAction<>)];
static switch_::SwitchPublishAction<> *const switch__switchpublishaction_id = reinterpret_cast<switch_::SwitchPublishAction<> *>(switch__switch__switchpublishaction_id__pstorage);
alignas(UpdateComponentAction<>) static unsigned char esphome__updatecomponentaction_id_5__pstorage[sizeof(UpdateComponentAction<>)];
static UpdateComponentAction<> *const updatecomponentaction_id_5 = reinterpret_cast<UpdateComponentAction<> *>(esphome__updatecomponentaction_id_5__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_15__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_15 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_15__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_16__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_16 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_16__pstorage);
alignas(deep_sleep::EnterDeepSleepAction<>) static unsigned char deep_sleep__deep_sleep_enterdeepsleepaction_id__pstorage[sizeof(deep_sleep::EnterDeepSleepAction<>)];
static deep_sleep::EnterDeepSleepAction<> *const deep_sleep_enterdeepsleepaction_id = reinterpret_cast<deep_sleep::EnterDeepSleepAction<> *>(deep_sleep__deep_sleep_enterdeepsleepaction_id__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_2__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_2 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_2__pstorage);
alignas(api::APIConnectedCondition<>) static unsigned char api__api_apiconnectedcondition_id__pstorage[sizeof(api::APIConnectedCondition<>)];
static api::APIConnectedCondition<> *const api_apiconnectedcondition_id = reinterpret_cast<api::APIConnectedCondition<> *>(api__api_apiconnectedcondition_id__pstorage);
alignas(WaitUntilAction<>) static unsigned char esphome__waituntilaction_id__pstorage[sizeof(WaitUntilAction<>)];
static WaitUntilAction<> *const waituntilaction_id = reinterpret_cast<WaitUntilAction<> *>(esphome__waituntilaction_id__pstorage);
alignas(DelayAction<>) static unsigned char esphome__delayaction_id__pstorage[sizeof(DelayAction<>)];
static DelayAction<> *const delayaction_id = reinterpret_cast<DelayAction<> *>(esphome__delayaction_id__pstorage);
alignas(script::ScriptExecuteAction<script::Script<>>) static unsigned char script__script_scriptexecuteaction_id__pstorage[sizeof(script::ScriptExecuteAction<script::Script<>>)];
static script::ScriptExecuteAction<script::Script<>> *const script_scriptexecuteaction_id = reinterpret_cast<script::ScriptExecuteAction<script::Script<>> *>(script__script_scriptexecuteaction_id__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_5__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_5 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_5__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id_5__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id_5 = reinterpret_cast<Automation<> *>(esphome__automation_id_5__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_6__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_6 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_6__pstorage);
#undef yield
#define yield() esphome::yield()
#undef millis
#define millis() esphome::millis()
#undef micros
#define micros() esphome::micros()
#undef delay
#define delay(x) esphome::delay(x)
#undef delayMicroseconds
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
static constexpr size_t ESPHOME_LOOPING_COMPONENT_COUNT = \
  (1 * HasLoopOverride<logger::Logger>::value) + \
  (1 * HasLoopOverride<wifi::WiFiComponent>::value) + \
  (1 * HasLoopOverride<mdns::MDNSComponent>::value) + \
  (1 * HasLoopOverride<esphome::ESPHomeOTAComponent>::value) + \
  (1 * HasLoopOverride<preferences::IntervalSyncer>::value) + \
  (1 * HasLoopOverride<safe_mode::SafeModeComponent>::value) + \
  (1 * HasLoopOverride<api::APIServer>::value) + \
  (1 * HasLoopOverride<StartupTrigger>::value) + \
  (1 * HasLoopOverride<deep_sleep::DeepSleepComponent>::value) + \
  (1 * HasLoopOverride<gpio::GPIOSwitch>::value) + \
  (2 * HasLoopOverride<template_::TemplateSwitch>::value) + \
  (3 * HasLoopOverride<template_::TemplateNumber>::value) + \
  (1 * HasLoopOverride<template_::TemplateSensor>::value) + \
  (1 * HasLoopOverride<wifi_signal::WiFiSignalSensor>::value) + \
  (4 * HasLoopOverride<globals::RestoringGlobalsComponent<int>>::value) + \
  (1 * HasLoopOverride<globals::RestoringGlobalsComponent<bool>>::value) + \
  (1 * HasLoopOverride<WaitUntilAction<>>::value);
namespace esphome {
static const char COMP_SRC_TABLE_STR_0[] PROGMEM = "logger";
static const char COMP_SRC_TABLE_STR_1[] PROGMEM = "wifi";
static const char COMP_SRC_TABLE_STR_2[] PROGMEM = "mdns";
static const char COMP_SRC_TABLE_STR_3[] PROGMEM = "esphome.ota";
static const char COMP_SRC_TABLE_STR_4[] PROGMEM = "preferences";
static const char COMP_SRC_TABLE_STR_5[] PROGMEM = "safe_mode";
static const char COMP_SRC_TABLE_STR_6[] PROGMEM = "api";
static const char COMP_SRC_TABLE_STR_7[] PROGMEM = "esphome.coroutine";
static const char COMP_SRC_TABLE_STR_8[] PROGMEM = "deep_sleep";
static const char COMP_SRC_TABLE_STR_9[] PROGMEM = "gpio.switch";
static const char COMP_SRC_TABLE_STR_10[] PROGMEM = "template.switch";
static const char COMP_SRC_TABLE_STR_11[] PROGMEM = "template.number";
static const char COMP_SRC_TABLE_STR_12[] PROGMEM = "template.sensor";
static const char COMP_SRC_TABLE_STR_13[] PROGMEM = "wifi_signal.sensor";
static const char COMP_SRC_TABLE_STR_14[] PROGMEM = "globals";
static const char *const COMP_SRC_TABLE[] PROGMEM = {COMP_SRC_TABLE_STR_0, COMP_SRC_TABLE_STR_1, COMP_SRC_TABLE_STR_2, COMP_SRC_TABLE_STR_3, COMP_SRC_TABLE_STR_4, COMP_SRC_TABLE_STR_5, COMP_SRC_TABLE_STR_6, COMP_SRC_TABLE_STR_7, COMP_SRC_TABLE_STR_8, COMP_SRC_TABLE_STR_9, COMP_SRC_TABLE_STR_10, COMP_SRC_TABLE_STR_11, COMP_SRC_TABLE_STR_12, COMP_SRC_TABLE_STR_13, COMP_SRC_TABLE_STR_14};
const LogString *component_source_lookup(uint8_t index) {
  if (index == 0 || index > 15) return LOG_STR("<unknown>");
  return reinterpret_cast<const LogString *>(
    progmem_read_ptr(&COMP_SRC_TABLE[index - 1]));
}
}  // namespace esphome
namespace esphome {
static const char ENTITY_DC_TABLE_STR_0[] PROGMEM = "signal_strength";
static const char ENTITY_DC_TABLE_EMPTY[] PROGMEM = "";
static const char *const ENTITY_DC_TABLE[] PROGMEM = {ENTITY_DC_TABLE_STR_0};
const char *entity_device_class_lookup(uint8_t index) {
  if (index == 0 || index > 1) return ENTITY_DC_TABLE_EMPTY;
  return progmem_read_ptr(&ENTITY_DC_TABLE[index - 1]);
}

static const char *const ENTITY_UOM_TABLE[] PROGMEM = {"\303\22715 min", "min", "s", "dBm"};
const char *entity_uom_lookup(uint8_t index) {
  if (index == 0 || index > 4) return "";
  return progmem_read_ptr(&ENTITY_UOM_TABLE[index - 1]);
}

static const char ENTITY_ICON_TABLE_STR_0[] PROGMEM = "mdi:water-pump";
static const char ENTITY_ICON_TABLE_STR_1[] PROGMEM = "mdi:timer";
static const char ENTITY_ICON_TABLE_STR_2[] PROGMEM = "mdi:sleep";
static const char ENTITY_ICON_TABLE_STR_3[] PROGMEM = "mdi:water-clock";
static const char ENTITY_ICON_TABLE_STR_4[] PROGMEM = "mdi:counter";
static const char ENTITY_ICON_TABLE_EMPTY[] PROGMEM = "";
static const char *const ENTITY_ICON_TABLE[] PROGMEM = {ENTITY_ICON_TABLE_STR_0, ENTITY_ICON_TABLE_STR_1, ENTITY_ICON_TABLE_STR_2, ENTITY_ICON_TABLE_STR_3, ENTITY_ICON_TABLE_STR_4};
const char *entity_icon_lookup(uint8_t index) {
  if (index == 0 || index > 5) return ENTITY_ICON_TABLE_EMPTY;
  return progmem_read_ptr(&ENTITY_ICON_TABLE[index - 1]);
}

}  // namespace esphome
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // logger:
  //   level: INFO
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   task_log_buffer_size: 768
  //   hardware_uart: UART0
  //   logs: {}
  //   runtime_tag_levels: false
  new(logger_logger_id) logger::Logger(115200);
  logger_logger_id->create_pthread_key();
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_INFO);
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: desert-quencher
  //   friendly_name: Desert Quencher
  //   on_boot:
  //     - priority: -100.0
  //       then:
  //         - lambda: !lambda |-
  //             if (esp_sleep_get_wakeup_cause() != ESP_SLEEP_WAKEUP_TIMER) {
  //               id(wake_count) = 0;
  //             }
  //           type_id: lambdaaction_id
  //         - logger.log:
  //             level: INFO
  //             format: Booting — wake_count=%d, period=%d, manual_override=%s
  //             args:
  //               - !lambda |-
  //                 id(wake_count)
  //               - !lambda |-
  //                 id(watering_period)
  //               - !lambda |-
  //                 id(manual_override) ? "yes" : "no"
  //             logger_id: logger_logger_id
  //             tag: main
  //           type_id: lambdaaction_id_2
  //         - wait_until:
  //             condition:
  //               api.connected:
  //                 id: api_apiserver_id
  //                 state_subscription_only: false
  //               type_id: api_apiconnectedcondition_id
  //             timeout: 25s
  //           type_id: waituntilaction_id
  //         - delay: 2s
  //           type_id: delayaction_id
  //         - script.execute:
  //             id: evaluate_and_water
  //           type_id: script_scriptexecuteaction_id
  //       automation_id: automation_id
  //       trigger_id: startuptrigger_id
  //   min_version: 2026.5.1
  //   build_path: build/desert-quencher
  //   platformio_options: {}
  //   environment_variables: {}
  //   includes: []
  //   includes_c: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  new (&App) Application();
  App.pre_setup("desert-quencher", 15, "Desert Quencher", 15);
  App.looping_components_.init(ESPHOME_LOOPING_COMPONENT_COUNT);
  // switch:
  // number:
  // sensor:
  App.register_component_(logger_logger_id, 1);
  // wifi:
  //   fast_connect: true
  //   on_connect:
  //     then:
  //       - logger.log:
  //           format: WiFi connected
  //           level: DEBUG
  //           logger_id: logger_logger_id
  //           tag: main
  //           args: []
  //         type_id: lambdaaction_id_3
  //     trigger_id: trigger_id
  //     automation_id: automation_id_2
  //   on_disconnect:
  //     then:
  //       - logger.log:
  //           format: WiFi disconnected
  //           level: DEBUG
  //           logger_id: logger_logger_id
  //           tag: main
  //           args: []
  //         type_id: lambdaaction_id_4
  //     trigger_id: trigger_id_2
  //     automation_id: automation_id_3
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   post_connect_roaming: true
  //   min_auth_mode: WPA2
  //   networks:
  //     - ssid: !secret 'wifi_ssid'
  //       password: !secret 'wifi_password'
  //       id: wifi_wifiap_id
  //       priority: 0
  //   use_address: desert-quencher.local
  new(wifi_wificomponent_id) wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("desert-quencher.local");
  wifi_wificomponent_id->init_sta(1);
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("Vizinho");
  wifi_wifiap_id.set_password("1234567890");
  wifi_wifiap_id.set_priority(0);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent_id->set_min_auth_mode(wifi::WIFI_MIN_AUTH_MODE_WPA2);
  App.register_component_(wifi_wificomponent_id, 2);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  new(mdns_mdnscomponent_id) mdns::MDNSComponent();
  App.register_component_(mdns_mdnscomponent_id, 3);
  // ota:
  // ota.esphome:
  //   platform: esphome
  //   password: !secret 'ota_password'
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  //   allow_partition_access: false
  new(esphome_esphomeotacomponent_id) esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("37ccb196d824828e7ae890a488326336");
  App.register_component_(esphome_esphomeotacomponent_id, 4);
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  new(preferences_intervalsyncer_id) preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  App.register_component_(preferences_intervalsyncer_id, 5);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  new(safe_mode_safemodecomponent_id) safe_mode::SafeModeComponent();
  App.register_component_(safe_mode_safemodecomponent_id, 6);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  new(automation_id_2) Automation<>(wifi_wificomponent_id->get_connect_trigger());
  new(lambdaaction_id_3) StatelessLambdaAction<>([]() -> void {
      ESP_LOGD("main", "WiFi connected");
  });
  automation_id_2->add_actions({lambdaaction_id_3});
  new(automation_id_3) Automation<>(wifi_wificomponent_id->get_disconnect_trigger());
  new(lambdaaction_id_4) StatelessLambdaAction<>([]() -> void {
      ESP_LOGD("main", "WiFi disconnected");
  });
  automation_id_3->add_actions({lambdaaction_id_4});
  // api:
  //   encryption:
  //     key: !secret 'api_encryption_key'
  //   id: api_apiserver_id
  //   port: 6053
  //   reboot_timeout: 15min
  //   batch_delay: 100ms
  //   custom_services: false
  //   homeassistant_services: false
  //   homeassistant_states: false
  //   listen_backlog: 4
  //   max_connections: 5
  //   max_send_queue: 8
  new(api_apiserver_id) api::APIServer();
  App.register_component_(api_apiserver_id, 7);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_reboot_timeout(900000);
  api_apiserver_id->set_batch_delay(100);
  api_apiserver_id->set_listen_backlog(4);
  api_apiserver_id->set_noise_psk({50, 217, 20, 104, 3, 168, 226, 16, 219, 166, 196, 88, 128, 139, 151, 207, 231, 102, 9, 185, 240, 128, 41, 10, 234, 156, 62, 80, 254, 202, 81, 181});
  new(startuptrigger_id) StartupTrigger(-100.0f);
  App.register_component_(startuptrigger_id, 8);
  new(automation_id) Automation<>(startuptrigger_id);
  // esp32:
  //   board: firebeetle32
  //   framework:
  //     type: arduino
  //     version: 3.3.8
  //     sdkconfig_options: {}
  //     log_level: ERROR
  //     advanced:
  //       compiler_optimization: SIZE
  //       enable_idf_experimental_features: false
  //       enable_lwip_assert: true
  //       ignore_efuse_custom_mac: false
  //       ignore_efuse_mac_crc: false
  //       sram1_as_iram: false
  //       enable_lwip_mdns_queries: true
  //       enable_lwip_bridge_interface: false
  //       enable_lwip_tcpip_core_locking: true
  //       enable_lwip_check_thread_safety: true
  //       disable_libc_locks_in_iram: true
  //       disable_vfs_support_termios: true
  //       disable_vfs_support_select: true
  //       disable_vfs_support_dir: true
  //       freertos_in_iram: false
  //       ringbuf_in_iram: false
  //       heap_in_iram: false
  //       execute_from_psram: false
  //       loop_task_stack_size: 8192
  //       enable_ota_rollback: true
  //       use_full_certificate_bundle: false
  //       include_builtin_idf_components: []
  //       enable_full_printf: false
  //       disable_debug_stubs: true
  //       disable_ocd_aware: true
  //       disable_usb_serial_jtag_secondary: true
  //       disable_dev_null_vfs: true
  //       disable_mbedtls_peer_cert: true
  //       disable_mbedtls_pkcs7: true
  //       disable_regi2c_in_iram: true
  //       adc_oneshot_in_iram: false
  //       disable_fatfs: true
  //     components: []
  //     platform_version: https:github.com/pioarduino/platform-espressif32/releases/download/55.03.38-1/platform-espressif32.zip
  //     source: pioarduino/framework-arduinoespressif32@https:github.com/espressif/arduino-esp32/releases/download/3.3.8/esp32-core-3.3.8.tar.xz
  //   flash_size: 4MB
  //   watchdog_timeout: 5s
  //   variant: ESP32
  //   cpu_frequency: 240MHZ
  // deep_sleep:
  //   id: deep_sleep_1
  //   sleep_duration: 15min
  new(deep_sleep_1) deep_sleep::DeepSleepComponent();
  App.register_component_(deep_sleep_1, 9);
  deep_sleep_1->set_sleep_duration(900000);
  // switch.gpio:
  //   platform: gpio
  //   pin:
  //     number: 26
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   id: valve
  //   name: Valve
  //   restore_mode: ALWAYS_OFF
  //   on_turn_on:
  //     - then:
  //         - logger.log:
  //             level: INFO
  //             format: Valve OPENED — will close in %ds
  //             args:
  //               - !lambda |-
  //                 id(valve_duration_s)
  //             logger_id: logger_logger_id
  //             tag: main
  //           type_id: lambdaaction_id_5
  //       trigger_id: trigger_id_3
  //       automation_id: automation_id_4
  //   on_turn_off:
  //     - then:
  //         - logger.log:
  //             format: Valve CLOSED
  //             level: DEBUG
  //             logger_id: logger_logger_id
  //             tag: main
  //             args: []
  //           type_id: lambdaaction_id_6
  //       trigger_id: trigger_id_4
  //       automation_id: automation_id_5
  //   disabled_by_default: false
  //   interlock_wait_time: 0ms
  new(valve) gpio::GPIOSwitch();
  valve->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  App.register_switch(valve, "Valve", 636313445, 0);
  App.register_component_(valve, 10);
  new(esp32_esp32internalgpiopin_id) esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_26);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  valve->set_pin(esp32_esp32internalgpiopin_id);
  new(automation_id_4) Automation<>();
  // switch.template:
  //   platform: template
  //   name: Prevent Deep Sleep
  //   id: prevent_deep_sleep
  //   optimistic: true
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   turn_on_action:
  //     then:
  //       - deep_sleep.prevent:
  //           id: deep_sleep_1
  //         type_id: deep_sleep_preventdeepsleepaction_id
  //     trigger_id: trigger_id_5
  //     automation_id: automation_id_6
  //   turn_off_action:
  //     then:
  //       - deep_sleep.allow:
  //           id: deep_sleep_1
  //         type_id: deep_sleep_allowdeepsleepaction_id
  //     trigger_id: trigger_id_6
  //     automation_id: automation_id_7
  //   disabled_by_default: false
  //   assumed_state: false
  new(prevent_deep_sleep) template_::TemplateSwitch();
  prevent_deep_sleep->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  App.register_switch(prevent_deep_sleep, "Prevent Deep Sleep", 2631505450UL, 0);
  App.register_component_(prevent_deep_sleep, 11);
  new(automation_id_7) Automation<>(prevent_deep_sleep->get_turn_off_trigger());
  new(deep_sleep_allowdeepsleepaction_id) deep_sleep::AllowDeepSleepAction<>();
  deep_sleep_allowdeepsleepaction_id->set_parent(deep_sleep_1);
  automation_id_7->add_actions({deep_sleep_allowdeepsleepaction_id});
  new(automation_id_6) Automation<>(prevent_deep_sleep->get_turn_on_trigger());
  new(deep_sleep_preventdeepsleepaction_id) deep_sleep::PreventDeepSleepAction<>();
  deep_sleep_preventdeepsleepaction_id->set_parent(deep_sleep_1);
  automation_id_6->add_actions({deep_sleep_preventdeepsleepaction_id});
  prevent_deep_sleep->set_optimistic(true);
  prevent_deep_sleep->set_assumed_state(false);
  // switch.template:
  //   platform: template
  //   name: Manual Override
  //   id: manual_override_switch
  //   icon: mdi:water-pump
  //   lambda: !lambda |-
  //     return id(manual_override);
  //   turn_on_action:
  //     then:
  //       - globals.set:
  //           id: manual_override
  //           value: 'true'
  //         type_id: globals_globalvarsetaction_id
  //       - logger.log:
  //           format: Manual override ENABLED — will water on next wake
  //           level: DEBUG
  //           logger_id: logger_logger_id
  //           tag: main
  //           args: []
  //         type_id: lambdaaction_id_7
  //     trigger_id: trigger_id_7
  //     automation_id: automation_id_8
  //   turn_off_action:
  //     then:
  //       - globals.set:
  //           id: manual_override
  //           value: 'false'
  //         type_id: globals_globalvarsetaction_id_2
  //       - logger.log:
  //           format: Manual override DISABLED
  //           level: DEBUG
  //           logger_id: logger_logger_id
  //           tag: main
  //           args: []
  //         type_id: lambdaaction_id_8
  //     trigger_id: trigger_id_8
  //     automation_id: automation_id_9
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   optimistic: false
  //   assumed_state: false
  new(manual_override_switch) template_::TemplateSwitch();
  manual_override_switch->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  App.register_switch(manual_override_switch, "Manual Override", 2044534326, 65536);  // icon:mdi:water-pump
  App.register_component_(manual_override_switch, 11);
  // number.template:
  //   platform: template
  //   name: Watering Period
  //   id: watering_period_num
  //   icon: mdi:timer
  //   unit_of_measurement: ×15 min
  //   min_value: 1.0
  //   max_value: 96.0
  //   step: 1.0
  //   lambda: !lambda |-
  //     return id(watering_period);
  //   update_interval: 4294967295ms
  //   set_action:
  //     then:
  //       - globals.set:
  //           id: watering_period
  //           value: !lambda |-
  //             return (int)x;
  //         type_id: globals_globalvarsetaction_id_3
  //       - logger.log:
  //           level: INFO
  //           format: Watering period changed to %d × 15 min = %d min total
  //           args:
  //             - !lambda |-
  //               (int)x
  //             - !lambda |-
  //               (int)x * 15
  //           logger_id: logger_logger_id
  //           tag: main
  //         type_id: lambdaaction_id_9
  //     trigger_id: trigger_id_9
  //     automation_id: automation_id_10
  //   disabled_by_default: false
  //   mode: AUTO
  //   optimistic: false
  new(watering_period_num) template_::TemplateNumber();
  watering_period_num->set_update_interval(4294967295UL);
  App.register_component_(watering_period_num, 12);
  watering_period_num->traits.set_min_value(1.0f);
  watering_period_num->traits.set_max_value(96.0f);
  watering_period_num->traits.set_step(1.0f);
  watering_period_num->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(watering_period_num, "Watering Period", 324852754, 131328);  // uom:×15 min, icon:mdi:timer
  // number.template:
  //   platform: template
  //   name: Sleep Duration
  //   id: sleep_duration_num
  //   icon: mdi:sleep
  //   unit_of_measurement: min
  //   min_value: 15.0
  //   max_value: 1440.0
  //   step: 15.0
  //   lambda: !lambda |-
  //     return id(sleep_duration_min);
  //   update_interval: 4294967295ms
  //   set_action:
  //     then:
  //       - globals.set:
  //           id: sleep_duration_min
  //           value: !lambda |-
  //             return (int)x;
  //         type_id: globals_globalvarsetaction_id_4
  //       - logger.log:
  //           level: INFO
  //           format: Sleep duration changed to %dmin
  //           args:
  //             - !lambda |-
  //               (int)x
  //           logger_id: logger_logger_id
  //           tag: main
  //         type_id: lambdaaction_id_10
  //     trigger_id: trigger_id_10
  //     automation_id: automation_id_11
  //   disabled_by_default: false
  //   mode: AUTO
  //   optimistic: false
  new(sleep_duration_num) template_::TemplateNumber();
  sleep_duration_num->set_update_interval(4294967295UL);
  App.register_component_(sleep_duration_num, 12);
  sleep_duration_num->traits.set_min_value(15.0f);
  sleep_duration_num->traits.set_max_value(1440.0f);
  sleep_duration_num->traits.set_step(15.0f);
  sleep_duration_num->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(sleep_duration_num, "Sleep Duration", 1579719361, 197120);  // uom:min, icon:mdi:sleep
  // number.template:
  //   platform: template
  //   name: Valve Duration
  //   id: valve_duration_num
  //   icon: mdi:water-clock
  //   unit_of_measurement: s
  //   min_value: 5.0
  //   max_value: 300.0
  //   step: 5.0
  //   lambda: !lambda |-
  //     return id(valve_duration_s);
  //   update_interval: 4294967295ms
  //   set_action:
  //     then:
  //       - globals.set:
  //           id: valve_duration_s
  //           value: !lambda |-
  //             return (int)x;
  //         type_id: globals_globalvarsetaction_id_5
  //       - logger.log:
  //           level: INFO
  //           format: Valve duration changed to %ds
  //           args:
  //             - !lambda |-
  //               (int)x
  //           logger_id: logger_logger_id
  //           tag: main
  //         type_id: lambdaaction_id_11
  //     trigger_id: trigger_id_11
  //     automation_id: automation_id_12
  //   disabled_by_default: false
  //   mode: AUTO
  //   optimistic: false
  new(valve_duration_num) template_::TemplateNumber();
  valve_duration_num->set_update_interval(4294967295UL);
  App.register_component_(valve_duration_num, 12);
  valve_duration_num->traits.set_min_value(5.0f);
  valve_duration_num->traits.set_max_value(300.0f);
  valve_duration_num->traits.set_step(5.0f);
  valve_duration_num->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(valve_duration_num, "Valve Duration", 4198995648UL, 262912);  // uom:s, icon:mdi:water-clock
  // sensor.template:
  //   platform: template
  //   name: Wakes Until Watering
  //   id: wakes_remaining
  //   icon: mdi:counter
  //   accuracy_decimals: 0
  //   update_interval: 4294967295ms
  //   lambda: !lambda |-
  //     int rem = id(watering_period) - id(wake_count);
  //     return rem > 0 ? rem : 0;
  //   disabled_by_default: false
  //   force_update: false
  new(wakes_remaining) template_::TemplateSensor();
  wakes_remaining->set_accuracy_decimals(0);
  App.register_sensor(wakes_remaining, "Wakes Until Watering", 2692768967UL, 327680);  // icon:mdi:counter
  wakes_remaining->set_update_interval(4294967295UL);
  App.register_component_(wakes_remaining, 13);
  // sensor.wifi_signal:
  //   platform: wifi_signal
  //   name: WiFi Signal
  //   update_interval: 10s
  //   disabled_by_default: false
  //   force_update: false
  //   id: wifi_signal_wifisignalsensor_id
  //   unit_of_measurement: dBm
  //   accuracy_decimals: 0
  //   device_class: signal_strength
  //   state_class: measurement
  //   entity_category: diagnostic
  new(wifi_signal_wifisignalsensor_id) wifi_signal::WiFiSignalSensor();
  wifi_signal_wifisignalsensor_id->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  wifi_signal_wifisignalsensor_id->set_accuracy_decimals(0);
  App.register_sensor(wifi_signal_wifisignalsensor_id, "WiFi Signal", 799351157, 134218753);  // category:diagnostic, dc:signal_strength, uom:dBm
  wifi_signal_wifisignalsensor_id->set_update_interval(10000);
  App.register_component_(wifi_signal_wifisignalsensor_id, 14);
  // script:
  //   - id: evaluate_and_water
  //     then:
  //       - lambda: !lambda |-
  //           id(wake_count) += 1;
  //         type_id: lambdaaction_id_12
  //       - component.update:
  //           id: wakes_remaining
  //         type_id: updatecomponentaction_id
  //       - component.update:
  //           id: watering_period_num
  //         type_id: updatecomponentaction_id_2
  //       - component.update:
  //           id: valve_duration_num
  //         type_id: updatecomponentaction_id_3
  //       - component.update:
  //           id: sleep_duration_num
  //         type_id: updatecomponentaction_id_4
  //       - logger.log:
  //           level: INFO
  //           format: 'Evaluating: wake %d/%d, manual_override=%s, wakes remaining=%d'
  //           args:
  //             - !lambda |-
  //               id(wake_count)
  //             - !lambda |-
  //               id(watering_period)
  //             - !lambda |-
  //               id(manual_override) ? "yes" : "no"
  //             - !lambda |-
  //               id(watering_period) - id(wake_count)
  //           logger_id: logger_logger_id
  //           tag: main
  //         type_id: lambdaaction_id_13
  //       - if:
  //           condition:
  //             lambda: !lambda |-
  //               return id(manual_override) || id(wake_count) >= id(watering_period);
  //             type_id: lambdacondition_id
  //           then:
  //             - logger.log:
  //                 level: INFO
  //                 format: Watering triggered (%s)
  //                 args:
  //                   - !lambda |-
  //                     id(manual_override) ? "manual override" : "scheduled"
  //                 logger_id: logger_logger_id
  //                 tag: main
  //               type_id: lambdaaction_id_14
  //             - switch.turn_on:
  //                 id: valve
  //               type_id: switch__turnonaction_id
  //             - delay: !lambda |-
  //                 return id(valve_duration_s) * 1000;
  //               type_id: delayaction_id_2
  //             - switch.turn_off:
  //                 id: valve
  //               type_id: switch__turnoffaction_id
  //             - globals.set:
  //                 id: wake_count
  //                 value: '0'
  //               type_id: globals_globalvarsetaction_id_6
  //             - globals.set:
  //                 id: manual_override
  //                 value: 'false'
  //               type_id: globals_globalvarsetaction_id_7
  //             - switch.template.publish:
  //                 id: manual_override_switch
  //                 state: false
  //               type_id: switch__switchpublishaction_id
  //             - component.update:
  //                 id: wakes_remaining
  //               type_id: updatecomponentaction_id_5
  //             - logger.log:
  //                 level: INFO
  //                 format: Watering complete. Next scheduled watering in %d min (%d wakes).
  //                 args:
  //                   - !lambda |-
  //                     id(watering_period) * 15
  //                   - !lambda |-
  //                     id(watering_period)
  //                 logger_id: logger_logger_id
  //                 tag: main
  //               type_id: lambdaaction_id_15
  //           else:
  //             - logger.log:
  //                 level: INFO
  //                 format: No watering needed. %d wake(s) and %d min until next watering.
  //                 args:
  //                   - !lambda |-
  //                     id(watering_period) - id(wake_count)
  //                   - !lambda |-
  //                     (id(watering_period) - id(wake_count)) * 15
  //                 logger_id: logger_logger_id
  //                 tag: main
  //               type_id: lambdaaction_id_16
  //         type_id: ifaction_id
  //       - deep_sleep.enter:
  //           id: deep_sleep_1
  //           sleep_duration: !lambda |-
  //             return id(sleep_duration_min) * 60000;
  //         type_id: deep_sleep_enterdeepsleepaction_id
  //     trigger_id: trigger_id_12
  //     automation_id: automation_id_13
  //     mode: single
  //     parameters: {}
  new(evaluate_and_water) script::SingleScript<>();
  evaluate_and_water->set_name(LOG_STR("evaluate_and_water"));
  new(automation_id_13) Automation<>(evaluate_and_water);
  // md5:
  // sha256:
  //   {}
  // socket:
  //   implementation: bsd_sockets
  // globals:
  //   id: wake_count
  //   type: int
  //   restore_value: true
  //   initial_value: '0'
  //   update_interval: 1s
  new(wake_count) globals::RestoringGlobalsComponent<int>(0);
  wake_count->set_update_interval(1000);
  App.register_component_(wake_count, 15);
  wake_count->set_name_hash(785323805);
  // globals:
  //   id: watering_period
  //   type: int
  //   restore_value: true
  //   initial_value: '4'
  //   update_interval: 1s
  new(watering_period) globals::RestoringGlobalsComponent<int>(4);
  watering_period->set_update_interval(1000);
  App.register_component_(watering_period, 15);
  watering_period->set_name_hash(1119692944);
  // globals:
  //   id: valve_duration_s
  //   type: int
  //   restore_value: true
  //   initial_value: '30'
  //   update_interval: 1s
  new(valve_duration_s) globals::RestoringGlobalsComponent<int>(30);
  valve_duration_s->set_update_interval(1000);
  App.register_component_(valve_duration_s, 15);
  valve_duration_s->set_name_hash(664109524);
  // globals:
  //   id: manual_override
  //   type: bool
  //   restore_value: true
  //   initial_value: 'false'
  //   update_interval: 1s
  new(manual_override) globals::RestoringGlobalsComponent<bool>(false);
  manual_override->set_update_interval(1000);
  App.register_component_(manual_override, 15);
  manual_override->set_name_hash(1106526432);
  // globals:
  //   id: sleep_duration_min
  //   type: int
  //   restore_value: true
  //   initial_value: '15'
  //   update_interval: 1s
  new(sleep_duration_min) globals::RestoringGlobalsComponent<int>(15);
  sleep_duration_min->set_update_interval(1000);
  App.register_component_(sleep_duration_min, 15);
  sleep_duration_min->set_name_hash(3769235313UL);
  manual_override_switch->set_state_lambda([]() -> std::optional<bool> {
      #line 121 "desert-quencher.yaml"
      return manual_override->value();
  });
  new(automation_id_9) Automation<>(manual_override_switch->get_turn_off_trigger());
  new(globals_globalvarsetaction_id_2) globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>>(manual_override);
  globals_globalvarsetaction_id_2->set_value([]() -> globals::RestoringGlobalsComponent<bool>::value_type {
      return false;
  });
  new(lambdaaction_id_8) StatelessLambdaAction<>([]() -> void {
      ESP_LOGD("main", "Manual override DISABLED");
  });
  automation_id_9->add_actions({globals_globalvarsetaction_id_2, lambdaaction_id_8});
  new(automation_id_8) Automation<>(manual_override_switch->get_turn_on_trigger());
  new(globals_globalvarsetaction_id) globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>>(manual_override);
  globals_globalvarsetaction_id->set_value([]() -> globals::RestoringGlobalsComponent<bool>::value_type {
      return true;
  });
  new(lambdaaction_id_7) StatelessLambdaAction<>([]() -> void {
      ESP_LOGD("main", "Manual override ENABLED \342\200\224 will water on next wake");
  });
  automation_id_8->add_actions({globals_globalvarsetaction_id, lambdaaction_id_7});
  manual_override_switch->set_optimistic(false);
  manual_override_switch->set_assumed_state(false);
  watering_period_num->set_template([]() -> std::optional<float> {
      #line 144 "desert-quencher.yaml"
      return watering_period->value();
  });
  new(automation_id_10) Automation<float>(watering_period_num->get_set_trigger());
  new(globals_globalvarsetaction_id_3) globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float>(watering_period);
  globals_globalvarsetaction_id_3->set_value([](float x) -> globals::RestoringGlobalsComponent<int>::value_type {
      #line 148 "desert-quencher.yaml"
      return (int)x;
  });
  new(lambdaaction_id_9) StatelessLambdaAction<float>([](float x) -> void {
      ESP_LOGI("main", "Watering period changed to %d \303\227 15 min = %d min total", (int)x, (int)x * 15);
  });
  automation_id_10->add_actions({globals_globalvarsetaction_id_3, lambdaaction_id_9});
  sleep_duration_num->set_template([]() -> std::optional<float> {
      #line 163 "desert-quencher.yaml"
      return sleep_duration_min->value();
  });
  new(automation_id_11) Automation<float>(sleep_duration_num->get_set_trigger());
  new(globals_globalvarsetaction_id_4) globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float>(sleep_duration_min);
  globals_globalvarsetaction_id_4->set_value([](float x) -> globals::RestoringGlobalsComponent<int>::value_type {
      #line 167 "desert-quencher.yaml"
      return (int)x;
  });
  new(lambdaaction_id_10) StatelessLambdaAction<float>([](float x) -> void {
      ESP_LOGI("main", "Sleep duration changed to %dmin", (int)x);
  });
  automation_id_11->add_actions({globals_globalvarsetaction_id_4, lambdaaction_id_10});
  valve_duration_num->set_template([]() -> std::optional<float> {
      #line 182 "desert-quencher.yaml"
      return valve_duration_s->value();
  });
  new(automation_id_12) Automation<float>(valve_duration_num->get_set_trigger());
  new(globals_globalvarsetaction_id_5) globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>, float>(valve_duration_s);
  globals_globalvarsetaction_id_5->set_value([](float x) -> globals::RestoringGlobalsComponent<int>::value_type {
      #line 186 "desert-quencher.yaml"
      return (int)x;
  });
  new(lambdaaction_id_11) StatelessLambdaAction<float>([](float x) -> void {
      ESP_LOGI("main", "Valve duration changed to %ds", (int)x);
  });
  automation_id_12->add_actions({globals_globalvarsetaction_id_5, lambdaaction_id_11});
  wakes_remaining->set_template([]() -> std::optional<float> {
      #line 202 "desert-quencher.yaml"
      int rem = watering_period->value() - wake_count->value();
      return rem > 0 ? rem : 0;
  });
  new(lambdaaction_id_12) StatelessLambdaAction<>([]() -> void {
      #line 215 "desert-quencher.yaml"
      wake_count->value() += 1;
  });
  new(updatecomponentaction_id) UpdateComponentAction<>(wakes_remaining);
  new(updatecomponentaction_id_2) UpdateComponentAction<>(watering_period_num);
  new(updatecomponentaction_id_3) UpdateComponentAction<>(valve_duration_num);
  new(updatecomponentaction_id_4) UpdateComponentAction<>(sleep_duration_num);
  new(lambdaaction_id_13) StatelessLambdaAction<>([]() -> void {
      ESP_LOGI("main", "Evaluating: wake %d/%d, manual_override=%s, wakes remaining=%d", wake_count->value(), watering_period->value(), manual_override->value() ? "yes" : "no", watering_period->value() - wake_count->value());
  });
  new(lambdacondition_id) StatelessLambdaCondition<>([]() -> bool {
      #line 231 "desert-quencher.yaml"
      return manual_override->value() || wake_count->value() >= watering_period->value();
  });
  new(ifaction_id) IfAction<true>(lambdacondition_id);
  new(lambdaaction_id_14) StatelessLambdaAction<>([]() -> void {
      ESP_LOGI("main", "Watering triggered (%s)", manual_override->value() ? "manual override" : "scheduled");
  });
  new(switch__turnonaction_id) switch_::TurnOnAction<>(valve);
  new(delayaction_id_2) DelayAction<>();
  delayaction_id_2->set_delay([]() -> uint32_t {
      #line 237 "desert-quencher.yaml"
      return valve_duration_s->value() * 1000;
  });
  new(switch__turnoffaction_id) switch_::TurnOffAction<>(valve);
  new(globals_globalvarsetaction_id_6) globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<int>>(wake_count);
  globals_globalvarsetaction_id_6->set_value([]() -> globals::RestoringGlobalsComponent<int>::value_type {
      return 0;
  });
  new(globals_globalvarsetaction_id_7) globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>>(manual_override);
  globals_globalvarsetaction_id_7->set_value([]() -> globals::RestoringGlobalsComponent<bool>::value_type {
      return false;
  });
  new(switch__switchpublishaction_id) switch_::SwitchPublishAction<>(manual_override_switch);
  switch__switchpublishaction_id->set_state([]() -> bool {
      return false;
  });
  new(updatecomponentaction_id_5) UpdateComponentAction<>(wakes_remaining);
  new(lambdaaction_id_15) StatelessLambdaAction<>([]() -> void {
      ESP_LOGI("main", "Watering complete. Next scheduled watering in %d min (%d wakes).", watering_period->value() * 15, watering_period->value());
  });
  ifaction_id->add_then({lambdaaction_id_14, switch__turnonaction_id, delayaction_id_2, switch__turnoffaction_id, globals_globalvarsetaction_id_6, globals_globalvarsetaction_id_7, switch__switchpublishaction_id, updatecomponentaction_id_5, lambdaaction_id_15});
  new(lambdaaction_id_16) StatelessLambdaAction<>([]() -> void {
      ESP_LOGI("main", "No watering needed. %d wake(s) and %d min until next watering.", watering_period->value() - wake_count->value(), (watering_period->value() - wake_count->value()) * 15);
  });
  ifaction_id->add_else({lambdaaction_id_16});
  new(deep_sleep_enterdeepsleepaction_id) deep_sleep::EnterDeepSleepAction<>(deep_sleep_1);
  deep_sleep_enterdeepsleepaction_id->set_sleep_duration([]() -> uint32_t {
      #line 262 "desert-quencher.yaml"
      return sleep_duration_min->value() * 60000;
  });
  automation_id_13->add_actions({lambdaaction_id_12, updatecomponentaction_id, updatecomponentaction_id_2, updatecomponentaction_id_3, updatecomponentaction_id_4, lambdaaction_id_13, ifaction_id, deep_sleep_enterdeepsleepaction_id});
  new(lambdaaction_id) StatelessLambdaAction<>([]() -> void {
      #line 8 "desert-quencher.yaml"
      if (esp_sleep_get_wakeup_cause() != ESP_SLEEP_WAKEUP_TIMER) {
        wake_count->value() = 0;
      }
  });
  new(lambdaaction_id_2) StatelessLambdaAction<>([]() -> void {
      ESP_LOGI("main", "Booting \342\200\224 wake_count=%d, period=%d, manual_override=%s", wake_count->value(), watering_period->value(), manual_override->value() ? "yes" : "no");
  });
  new(api_apiconnectedcondition_id) api::APIConnectedCondition<>();
  api_apiconnectedcondition_id->set_state_subscription_only([]() -> bool {
      return false;
  });
  new(waituntilaction_id) WaitUntilAction<>(api_apiconnectedcondition_id);
  waituntilaction_id->set_timeout_value([]() -> uint32_t {
      return 25000;
  });
  App.register_component_(waituntilaction_id, 8);
  new(delayaction_id) DelayAction<>();
  delayaction_id->set_delay([]() -> uint32_t {
      return 2000;
  });
  new(script_scriptexecuteaction_id) script::ScriptExecuteAction<script::Script<>>(evaluate_and_water);
  script_scriptexecuteaction_id->set_args();
  automation_id->add_actions({lambdaaction_id, lambdaaction_id_2, waituntilaction_id, delayaction_id, script_scriptexecuteaction_id});
  new(lambdaaction_id_5) StatelessLambdaAction<>([]() -> void {
      ESP_LOGI("main", "Valve OPENED \342\200\224 will close in %ds", valve_duration_s->value());
  });
  automation_id_4->add_actions({lambdaaction_id_5});
  valve->add_on_state_callback(TriggerOnTrueForwarder{automation_id_4});
  new(automation_id_5) Automation<>();
  new(lambdaaction_id_6) StatelessLambdaAction<>([]() -> void {
      ESP_LOGD("main", "Valve CLOSED");
  });
  automation_id_5->add_actions({lambdaaction_id_6});
  valve->add_on_state_callback(TriggerOnFalseForwarder{automation_id_5});
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
