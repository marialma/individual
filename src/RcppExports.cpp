// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/individual.h"
#include "../inst/include/individual_types.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// dummy
void dummy();
static SEXP _individual_dummy_try() {
BEGIN_RCPP
    dummy();
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _individual_dummy() {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_individual_dummy_try());
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// update_state_listener
Rcpp::XPtr<listener_t> update_state_listener(const std::string individual, const std::string state);
RcppExport SEXP _individual_update_state_listener(SEXP individualSEXP, SEXP stateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type individual(individualSEXP);
    Rcpp::traits::input_parameter< const std::string >::type state(stateSEXP);
    rcpp_result_gen = Rcpp::wrap(update_state_listener(individual, state));
    return rcpp_result_gen;
END_RCPP
}
// reschedule_listener
Rcpp::XPtr<listener_t> reschedule_listener(const std::string event, double delay);
RcppExport SEXP _individual_reschedule_listener(SEXP eventSEXP, SEXP delaySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type event(eventSEXP);
    Rcpp::traits::input_parameter< double >::type delay(delaySEXP);
    rcpp_result_gen = Rcpp::wrap(reschedule_listener(event, delay));
    return rcpp_result_gen;
END_RCPP
}
// fixed_probability_state_change_process
Rcpp::XPtr<process_t> fixed_probability_state_change_process(const std::string individual, const std::string from_state, const std::string to_state, double rate);
RcppExport SEXP _individual_fixed_probability_state_change_process(SEXP individualSEXP, SEXP from_stateSEXP, SEXP to_stateSEXP, SEXP rateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type individual(individualSEXP);
    Rcpp::traits::input_parameter< const std::string >::type from_state(from_stateSEXP);
    Rcpp::traits::input_parameter< const std::string >::type to_state(to_stateSEXP);
    Rcpp::traits::input_parameter< double >::type rate(rateSEXP);
    rcpp_result_gen = Rcpp::wrap(fixed_probability_state_change_process(individual, from_state, to_state, rate));
    return rcpp_result_gen;
END_RCPP
}
// state_count_renderer_process
Rcpp::XPtr<process_t> state_count_renderer_process(const std::string individual, const std::vector<std::string> states);
RcppExport SEXP _individual_state_count_renderer_process(SEXP individualSEXP, SEXP statesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type individual(individualSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string> >::type states(statesSEXP);
    rcpp_result_gen = Rcpp::wrap(state_count_renderer_process(individual, states));
    return rcpp_result_gen;
END_RCPP
}
// variable_mean_renderer_process
Rcpp::XPtr<process_t> variable_mean_renderer_process(const std::string individual, const std::vector<std::string> variables);
RcppExport SEXP _individual_variable_mean_renderer_process(SEXP individualSEXP, SEXP variablesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type individual(individualSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string> >::type variables(variablesSEXP);
    rcpp_result_gen = Rcpp::wrap(variable_mean_renderer_process(individual, variables));
    return rcpp_result_gen;
END_RCPP
}
// execute_process
void execute_process(Rcpp::XPtr<process_t> process, Rcpp::XPtr<ProcessAPI> api);
RcppExport SEXP _individual_execute_process(SEXP processSEXP, SEXP apiSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<process_t> >::type process(processSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<ProcessAPI> >::type api(apiSEXP);
    execute_process(process, api);
    return R_NilValue;
END_RCPP
}
// create_process_api
Rcpp::XPtr<ProcessAPI> create_process_api(Rcpp::XPtr<State> state, Rcpp::XPtr<Scheduler> scheduler, Rcpp::List params, Rcpp::Environment renderer);
RcppExport SEXP _individual_create_process_api(SEXP stateSEXP, SEXP schedulerSEXP, SEXP paramsSEXP, SEXP rendererSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<State> >::type state(stateSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<Scheduler> >::type scheduler(schedulerSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Environment >::type renderer(rendererSEXP);
    rcpp_result_gen = Rcpp::wrap(create_process_api(state, scheduler, params, renderer));
    return rcpp_result_gen;
END_RCPP
}
// process_get_state
std::vector<size_t> process_get_state(Rcpp::XPtr<ProcessAPI> api, const std::string individual, const std::vector<std::string> states);
RcppExport SEXP _individual_process_get_state(SEXP apiSEXP, SEXP individualSEXP, SEXP statesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<ProcessAPI> >::type api(apiSEXP);
    Rcpp::traits::input_parameter< const std::string >::type individual(individualSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string> >::type states(statesSEXP);
    rcpp_result_gen = Rcpp::wrap(process_get_state(api, individual, states));
    return rcpp_result_gen;
END_RCPP
}
// process_get_variable
std::vector<double> process_get_variable(Rcpp::XPtr<ProcessAPI> api, const std::string individual, const std::string variable);
RcppExport SEXP _individual_process_get_variable(SEXP apiSEXP, SEXP individualSEXP, SEXP variableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<ProcessAPI> >::type api(apiSEXP);
    Rcpp::traits::input_parameter< const std::string >::type individual(individualSEXP);
    Rcpp::traits::input_parameter< const std::string >::type variable(variableSEXP);
    rcpp_result_gen = Rcpp::wrap(process_get_variable(api, individual, variable));
    return rcpp_result_gen;
END_RCPP
}
// process_queue_state_update
void process_queue_state_update(Rcpp::XPtr<ProcessAPI> api, const std::string individual, const std::string state, const std::vector<size_t> index_vector);
RcppExport SEXP _individual_process_queue_state_update(SEXP apiSEXP, SEXP individualSEXP, SEXP stateSEXP, SEXP index_vectorSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<ProcessAPI> >::type api(apiSEXP);
    Rcpp::traits::input_parameter< const std::string >::type individual(individualSEXP);
    Rcpp::traits::input_parameter< const std::string >::type state(stateSEXP);
    Rcpp::traits::input_parameter< const std::vector<size_t> >::type index_vector(index_vectorSEXP);
    process_queue_state_update(api, individual, state, index_vector);
    return R_NilValue;
END_RCPP
}
// process_queue_variable_update
void process_queue_variable_update(Rcpp::XPtr<ProcessAPI> api, const std::string individual, const std::string variable, const std::vector<size_t> index, const std::vector<double> values);
RcppExport SEXP _individual_process_queue_variable_update(SEXP apiSEXP, SEXP individualSEXP, SEXP variableSEXP, SEXP indexSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<ProcessAPI> >::type api(apiSEXP);
    Rcpp::traits::input_parameter< const std::string >::type individual(individualSEXP);
    Rcpp::traits::input_parameter< const std::string >::type variable(variableSEXP);
    Rcpp::traits::input_parameter< const std::vector<size_t> >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const std::vector<double> >::type values(valuesSEXP);
    process_queue_variable_update(api, individual, variable, index, values);
    return R_NilValue;
END_RCPP
}
// process_schedule
void process_schedule(Rcpp::XPtr<ProcessAPI> api, const std::string event, const std::vector<size_t> index_vector, double delay);
RcppExport SEXP _individual_process_schedule(SEXP apiSEXP, SEXP eventSEXP, SEXP index_vectorSEXP, SEXP delaySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<ProcessAPI> >::type api(apiSEXP);
    Rcpp::traits::input_parameter< const std::string >::type event(eventSEXP);
    Rcpp::traits::input_parameter< const std::vector<size_t> >::type index_vector(index_vectorSEXP);
    Rcpp::traits::input_parameter< double >::type delay(delaySEXP);
    process_schedule(api, event, index_vector, delay);
    return R_NilValue;
END_RCPP
}
// process_get_scheduled
std::vector<size_t> process_get_scheduled(Rcpp::XPtr<ProcessAPI> api, const std::string event);
RcppExport SEXP _individual_process_get_scheduled(SEXP apiSEXP, SEXP eventSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<ProcessAPI> >::type api(apiSEXP);
    Rcpp::traits::input_parameter< const std::string >::type event(eventSEXP);
    rcpp_result_gen = Rcpp::wrap(process_get_scheduled(api, event));
    return rcpp_result_gen;
END_RCPP
}
// process_clear_schedule
void process_clear_schedule(Rcpp::XPtr<ProcessAPI> api, const std::string event, const std::vector<size_t> index_vector);
RcppExport SEXP _individual_process_clear_schedule(SEXP apiSEXP, SEXP eventSEXP, SEXP index_vectorSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<ProcessAPI> >::type api(apiSEXP);
    Rcpp::traits::input_parameter< const std::string >::type event(eventSEXP);
    Rcpp::traits::input_parameter< const std::vector<size_t> >::type index_vector(index_vectorSEXP);
    process_clear_schedule(api, event, index_vector);
    return R_NilValue;
END_RCPP
}
// process_get_timestep
size_t process_get_timestep(Rcpp::XPtr<ProcessAPI> api);
RcppExport SEXP _individual_process_get_timestep(SEXP apiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<ProcessAPI> >::type api(apiSEXP);
    rcpp_result_gen = Rcpp::wrap(process_get_timestep(api));
    return rcpp_result_gen;
END_RCPP
}
// create_scheduler
Rcpp::XPtr<Scheduler> create_scheduler(const Rcpp::List events);
RcppExport SEXP _individual_create_scheduler(SEXP eventsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type events(eventsSEXP);
    rcpp_result_gen = Rcpp::wrap(create_scheduler(events));
    return rcpp_result_gen;
END_RCPP
}
// scheduler_tick
void scheduler_tick(const Rcpp::XPtr<Scheduler> scheduler);
RcppExport SEXP _individual_scheduler_tick(SEXP schedulerSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::XPtr<Scheduler> >::type scheduler(schedulerSEXP);
    scheduler_tick(scheduler);
    return R_NilValue;
END_RCPP
}
// scheduler_process_events
void scheduler_process_events(const Rcpp::XPtr<Scheduler> scheduler, const Rcpp::XPtr<ProcessAPI> cpp_api, const Rcpp::Environment r_api);
RcppExport SEXP _individual_scheduler_process_events(SEXP schedulerSEXP, SEXP cpp_apiSEXP, SEXP r_apiSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::XPtr<Scheduler> >::type scheduler(schedulerSEXP);
    Rcpp::traits::input_parameter< const Rcpp::XPtr<ProcessAPI> >::type cpp_api(cpp_apiSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Environment >::type r_api(r_apiSEXP);
    scheduler_process_events(scheduler, cpp_api, r_api);
    return R_NilValue;
END_RCPP
}
// create_state
Rcpp::XPtr<State> create_state(const Rcpp::List individuals);
RcppExport SEXP _individual_create_state(SEXP individualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type individuals(individualsSEXP);
    rcpp_result_gen = Rcpp::wrap(create_state(individuals));
    return rcpp_result_gen;
END_RCPP
}
// state_apply_updates
void state_apply_updates(Rcpp::XPtr<State> state);
RcppExport SEXP _individual_state_apply_updates(SEXP stateSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<State> >::type state(stateSEXP);
    state_apply_updates(state);
    return R_NilValue;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _individual_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("void(*dummy)()");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _individual_RcppExport_registerCCallable() { 
    R_RegisterCCallable("individual", "_individual_dummy", (DL_FUNC)_individual_dummy_try);
    R_RegisterCCallable("individual", "_individual_RcppExport_validate", (DL_FUNC)_individual_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_individual_dummy", (DL_FUNC) &_individual_dummy, 0},
    {"_individual_update_state_listener", (DL_FUNC) &_individual_update_state_listener, 2},
    {"_individual_reschedule_listener", (DL_FUNC) &_individual_reschedule_listener, 2},
    {"_individual_fixed_probability_state_change_process", (DL_FUNC) &_individual_fixed_probability_state_change_process, 4},
    {"_individual_state_count_renderer_process", (DL_FUNC) &_individual_state_count_renderer_process, 2},
    {"_individual_variable_mean_renderer_process", (DL_FUNC) &_individual_variable_mean_renderer_process, 2},
    {"_individual_execute_process", (DL_FUNC) &_individual_execute_process, 2},
    {"_individual_create_process_api", (DL_FUNC) &_individual_create_process_api, 4},
    {"_individual_process_get_state", (DL_FUNC) &_individual_process_get_state, 3},
    {"_individual_process_get_variable", (DL_FUNC) &_individual_process_get_variable, 3},
    {"_individual_process_queue_state_update", (DL_FUNC) &_individual_process_queue_state_update, 4},
    {"_individual_process_queue_variable_update", (DL_FUNC) &_individual_process_queue_variable_update, 5},
    {"_individual_process_schedule", (DL_FUNC) &_individual_process_schedule, 4},
    {"_individual_process_get_scheduled", (DL_FUNC) &_individual_process_get_scheduled, 2},
    {"_individual_process_clear_schedule", (DL_FUNC) &_individual_process_clear_schedule, 3},
    {"_individual_process_get_timestep", (DL_FUNC) &_individual_process_get_timestep, 1},
    {"_individual_create_scheduler", (DL_FUNC) &_individual_create_scheduler, 1},
    {"_individual_scheduler_tick", (DL_FUNC) &_individual_scheduler_tick, 1},
    {"_individual_scheduler_process_events", (DL_FUNC) &_individual_scheduler_process_events, 3},
    {"_individual_create_state", (DL_FUNC) &_individual_create_state, 1},
    {"_individual_state_apply_updates", (DL_FUNC) &_individual_state_apply_updates, 1},
    {"_individual_RcppExport_registerCCallable", (DL_FUNC) &_individual_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_individual(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
