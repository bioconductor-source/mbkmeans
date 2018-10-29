// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// predict_mini_batch
Rcpp::NumericVector predict_mini_batch(SEXP data, Rcpp::NumericMatrix CENTROIDS, bool fuzzy, double eps);
RcppExport SEXP _mbkmeans_predict_mini_batch(SEXP dataSEXP, SEXP CENTROIDSSEXP, SEXP fuzzySEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type CENTROIDS(CENTROIDSSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_mini_batch(data, CENTROIDS, fuzzy, eps));
    return rcpp_result_gen;
END_RCPP
}
// mini_batch
Rcpp::List mini_batch(SEXP data, int clusters, int batch_size, int max_iters, int num_init, double init_fraction, std::string initializer, int early_stop_iter, bool verbose, Rcpp::Nullable<Rcpp::NumericMatrix> CENTROIDS, double tol, int seed);
RcppExport SEXP _mbkmeans_mini_batch(SEXP dataSEXP, SEXP clustersSEXP, SEXP batch_sizeSEXP, SEXP max_itersSEXP, SEXP num_initSEXP, SEXP init_fractionSEXP, SEXP initializerSEXP, SEXP early_stop_iterSEXP, SEXP verboseSEXP, SEXP CENTROIDSSEXP, SEXP tolSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< int >::type batch_size(batch_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iters(max_itersSEXP);
    Rcpp::traits::input_parameter< int >::type num_init(num_initSEXP);
    Rcpp::traits::input_parameter< double >::type init_fraction(init_fractionSEXP);
    Rcpp::traits::input_parameter< std::string >::type initializer(initializerSEXP);
    Rcpp::traits::input_parameter< int >::type early_stop_iter(early_stop_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type CENTROIDS(CENTROIDSSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(mini_batch(data, clusters, batch_size, max_iters, num_init, init_fraction, initializer, early_stop_iter, verbose, CENTROIDS, tol, seed));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mbkmeans_predict_mini_batch", (DL_FUNC) &_mbkmeans_predict_mini_batch, 4},
    {"_mbkmeans_mini_batch", (DL_FUNC) &_mbkmeans_mini_batch, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_mbkmeans(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
