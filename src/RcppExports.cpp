// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// find_components
DataFrame find_components(CharacterVector a, CharacterVector b, NumericVector w);
RcppExport SEXP _entropynet_find_components(SEXP aSEXP, SEXP bSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(find_components(a, b, w));
    return rcpp_result_gen;
END_RCPP
}
// edges_to_all_nodes
int edges_to_all_nodes(CharacterVector a, CharacterVector b, const int n);
RcppExport SEXP _entropynet_edges_to_all_nodes(SEXP aSEXP, SEXP bSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(edges_to_all_nodes(a, b, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_entropynet_find_components", (DL_FUNC) &_entropynet_find_components, 3},
    {"_entropynet_edges_to_all_nodes", (DL_FUNC) &_entropynet_edges_to_all_nodes, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_entropynet(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
