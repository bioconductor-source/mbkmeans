// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// beachmat_colSums
Rcpp::NumericVector beachmat_colSums(SEXP dmat);
RcppExport SEXP _beachball_beachmat_colSums(SEXP dmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dmat(dmatSEXP);
    rcpp_result_gen = Rcpp::wrap(beachmat_colSums(dmat));
    return rcpp_result_gen;
END_RCPP
}
// debug
SEXP debug(SEXP data);
RcppExport SEXP _beachball_debug(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(debug(data));
    return rcpp_result_gen;
END_RCPP
}
// random_choose
SEXP random_choose(SEXP data, double init_fraction);
RcppExport SEXP _beachball_random_choose(SEXP dataSEXP, SEXP init_fractionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type init_fraction(init_fractionSEXP);
    rcpp_result_gen = Rcpp::wrap(random_choose(data, init_fraction));
    return rcpp_result_gen;
END_RCPP
}
// set_seed
void set_seed(int seed);
RcppExport SEXP _beachball_set_seed(SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    set_seed(seed);
    return R_NilValue;
END_RCPP
}
// cluster_indices
Rcpp::List cluster_indices(arma::vec CLUSTER);
RcppExport SEXP _beachball_cluster_indices(SEXP CLUSTERSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type CLUSTER(CLUSTERSEXP);
    rcpp_result_gen = Rcpp::wrap(cluster_indices(CLUSTER));
    return rcpp_result_gen;
END_RCPP
}
// check_NaN_Inf
bool check_NaN_Inf(arma::mat x);
RcppExport SEXP _beachball_check_NaN_Inf(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(check_NaN_Inf(x));
    return rcpp_result_gen;
END_RCPP
}
// calc_silhouette
double calc_silhouette(double intra, double outer);
RcppExport SEXP _beachball_calc_silhouette(SEXP intraSEXP, SEXP outerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type intra(intraSEXP);
    Rcpp::traits::input_parameter< double >::type outer(outerSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_silhouette(intra, outer));
    return rcpp_result_gen;
END_RCPP
}
// sample_vec
arma::rowvec sample_vec(int num_elem, int start, int end, bool replace);
RcppExport SEXP _beachball_sample_vec(SEXP num_elemSEXP, SEXP startSEXP, SEXP endSEXP, SEXP replaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type num_elem(num_elemSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    Rcpp::traits::input_parameter< bool >::type replace(replaceSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_vec(num_elem, start, end, replace));
    return rcpp_result_gen;
END_RCPP
}
// squared_norm
double squared_norm(arma::mat x);
RcppExport SEXP _beachball_squared_norm(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(squared_norm(x));
    return rcpp_result_gen;
END_RCPP
}
// MinMat
int MinMat(arma::vec x);
RcppExport SEXP _beachball_MinMat(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(MinMat(x));
    return rcpp_result_gen;
END_RCPP
}
// WCSS
arma::vec WCSS(arma::rowvec vec, arma::mat centroids);
RcppExport SEXP _beachball_WCSS(SEXP vecSEXP, SEXP centroidsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type centroids(centroidsSEXP);
    rcpp_result_gen = Rcpp::wrap(WCSS(vec, centroids));
    return rcpp_result_gen;
END_RCPP
}
// validate_centroids
arma::rowvec validate_centroids(arma::mat& data, arma::mat init_centroids);
RcppExport SEXP _beachball_validate_centroids(SEXP dataSEXP, SEXP init_centroidsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type init_centroids(init_centroidsSEXP);
    rcpp_result_gen = Rcpp::wrap(validate_centroids(data, init_centroids));
    return rcpp_result_gen;
END_RCPP
}
// kmeans_pp_dist
double kmeans_pp_dist(arma::rowvec vec, arma::rowvec centroid);
RcppExport SEXP _beachball_kmeans_pp_dist(SEXP vecSEXP, SEXP centroidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type centroid(centroidSEXP);
    rcpp_result_gen = Rcpp::wrap(kmeans_pp_dist(vec, centroid));
    return rcpp_result_gen;
END_RCPP
}
// kmeans_pp_init
arma::mat kmeans_pp_init(arma::mat& data, int clusters, bool medoids);
RcppExport SEXP _beachball_kmeans_pp_init(SEXP dataSEXP, SEXP clustersSEXP, SEXP medoidsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< bool >::type medoids(medoidsSEXP);
    rcpp_result_gen = Rcpp::wrap(kmeans_pp_init(data, clusters, medoids));
    return rcpp_result_gen;
END_RCPP
}
// norm_fuzzy
arma::rowvec norm_fuzzy(arma::rowvec vec, double eps);
RcppExport SEXP _beachball_norm_fuzzy(SEXP vecSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_fuzzy(vec, eps));
    return rcpp_result_gen;
END_RCPP
}
// quantile_value
Rcpp::NumericVector quantile_value(arma::rowvec x, int clusters);
RcppExport SEXP _beachball_quantile_value(SEXP xSEXP, SEXP clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(quantile_value(x, clusters));
    return rcpp_result_gen;
END_RCPP
}
// duplicated_flag
bool duplicated_flag(arma::uvec x);
RcppExport SEXP _beachball_duplicated_flag(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(duplicated_flag(x));
    return rcpp_result_gen;
END_RCPP
}
// quantile_init_rcpp
arma::uvec quantile_init_rcpp(arma::mat data, int sample_rows, int clusters);
RcppExport SEXP _beachball_quantile_init_rcpp(SEXP dataSEXP, SEXP sample_rowsSEXP, SEXP clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type sample_rows(sample_rowsSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(quantile_init_rcpp(data, sample_rows, clusters));
    return rcpp_result_gen;
END_RCPP
}
// check_medoids
arma::vec check_medoids(arma::mat data, int clust, double tol);
RcppExport SEXP _beachball_check_medoids(SEXP dataSEXP, SEXP clustSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type clust(clustSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(check_medoids(data, clust, tol));
    return rcpp_result_gen;
END_RCPP
}
// SCALE
arma::mat SCALE(arma::mat data, bool mean_center, bool sd_scale);
RcppExport SEXP _beachball_SCALE(SEXP dataSEXP, SEXP mean_centerSEXP, SEXP sd_scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< bool >::type mean_center(mean_centerSEXP);
    Rcpp::traits::input_parameter< bool >::type sd_scale(sd_scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(SCALE(data, mean_center, sd_scale));
    return rcpp_result_gen;
END_RCPP
}
// mini_batch_kmeans
Rcpp::List mini_batch_kmeans(arma::mat& data, int clusters, int batch_size, int max_iters, int num_init, double init_fraction, std::string initializer, int early_stop_iter, bool verbose, Rcpp::Nullable<Rcpp::NumericMatrix> CENTROIDS, double tol, double tol_optimal_init, int seed);
RcppExport SEXP _beachball_mini_batch_kmeans(SEXP dataSEXP, SEXP clustersSEXP, SEXP batch_sizeSEXP, SEXP max_itersSEXP, SEXP num_initSEXP, SEXP init_fractionSEXP, SEXP initializerSEXP, SEXP early_stop_iterSEXP, SEXP verboseSEXP, SEXP CENTROIDSSEXP, SEXP tolSEXP, SEXP tol_optimal_initSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
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
    Rcpp::traits::input_parameter< double >::type tol_optimal_init(tol_optimal_initSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(mini_batch_kmeans(data, clusters, batch_size, max_iters, num_init, init_fraction, initializer, early_stop_iter, verbose, CENTROIDS, tol, tol_optimal_init, seed));
    return rcpp_result_gen;
END_RCPP
}
// type_integer_index
int type_integer_index(SEXP data);
RcppExport SEXP _beachball_type_integer_index(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(type_integer_index(data));
    return rcpp_result_gen;
END_RCPP
}
// type_numeric_index
int type_numeric_index(SEXP data);
RcppExport SEXP _beachball_type_numeric_index(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(type_numeric_index(data));
    return rcpp_result_gen;
END_RCPP
}
// make_to_string
std::string make_to_string(const Rcpp::RObject& str);
RcppExport SEXP _beachball_make_to_string(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RObject& >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(make_to_string(str));
    return rcpp_result_gen;
END_RCPP
}
// get_class
std::string get_class(const Rcpp::RObject& incoming);
RcppExport SEXP _beachball_get_class(SEXP incomingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RObject& >::type incoming(incomingSEXP);
    rcpp_result_gen = Rcpp::wrap(get_class(incoming));
    return rcpp_result_gen;
END_RCPP
}
// get_safe_slot
Rcpp::RObject get_safe_slot(const Rcpp::RObject& incoming, const std::string& slotname);
RcppExport SEXP _beachball_get_safe_slot(SEXP incomingSEXP, SEXP slotnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RObject& >::type incoming(incomingSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type slotname(slotnameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_safe_slot(incoming, slotname));
    return rcpp_result_gen;
END_RCPP
}
// transfer_data
SEXP transfer_data(SEXP data);
RcppExport SEXP _beachball_transfer_data(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(transfer_data(data));
    return rcpp_result_gen;
END_RCPP
}
// Week4_mini_batch_kmeans
Rcpp::List Week4_mini_batch_kmeans(SEXP dat, int clusters, int batch_size, int max_iters, int num_init, double init_fraction, std::string initializer, int early_stop_iter, bool verbose, Rcpp::Nullable<Rcpp::NumericMatrix> CENTROIDS, double tol, double tol_optimal_init, int seed);
RcppExport SEXP _beachball_Week4_mini_batch_kmeans(SEXP datSEXP, SEXP clustersSEXP, SEXP batch_sizeSEXP, SEXP max_itersSEXP, SEXP num_initSEXP, SEXP init_fractionSEXP, SEXP initializerSEXP, SEXP early_stop_iterSEXP, SEXP verboseSEXP, SEXP CENTROIDSSEXP, SEXP tolSEXP, SEXP tol_optimal_initSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dat(datSEXP);
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
    Rcpp::traits::input_parameter< double >::type tol_optimal_init(tol_optimal_initSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(Week4_mini_batch_kmeans(dat, clusters, batch_size, max_iters, num_init, init_fraction, initializer, early_stop_iter, verbose, CENTROIDS, tol, tol_optimal_init, seed));
    return rcpp_result_gen;
END_RCPP
}
// matrix_mean
Rcpp::NumericVector matrix_mean(SEXP data);
RcppExport SEXP _beachball_matrix_mean(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_mean(data));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_beachball_beachmat_colSums", (DL_FUNC) &_beachball_beachmat_colSums, 1},
    {"_beachball_debug", (DL_FUNC) &_beachball_debug, 1},
    {"_beachball_random_choose", (DL_FUNC) &_beachball_random_choose, 2},
    {"_beachball_set_seed", (DL_FUNC) &_beachball_set_seed, 1},
    {"_beachball_cluster_indices", (DL_FUNC) &_beachball_cluster_indices, 1},
    {"_beachball_check_NaN_Inf", (DL_FUNC) &_beachball_check_NaN_Inf, 1},
    {"_beachball_calc_silhouette", (DL_FUNC) &_beachball_calc_silhouette, 2},
    {"_beachball_sample_vec", (DL_FUNC) &_beachball_sample_vec, 4},
    {"_beachball_squared_norm", (DL_FUNC) &_beachball_squared_norm, 1},
    {"_beachball_MinMat", (DL_FUNC) &_beachball_MinMat, 1},
    {"_beachball_WCSS", (DL_FUNC) &_beachball_WCSS, 2},
    {"_beachball_validate_centroids", (DL_FUNC) &_beachball_validate_centroids, 2},
    {"_beachball_kmeans_pp_dist", (DL_FUNC) &_beachball_kmeans_pp_dist, 2},
    {"_beachball_kmeans_pp_init", (DL_FUNC) &_beachball_kmeans_pp_init, 3},
    {"_beachball_norm_fuzzy", (DL_FUNC) &_beachball_norm_fuzzy, 2},
    {"_beachball_quantile_value", (DL_FUNC) &_beachball_quantile_value, 2},
    {"_beachball_duplicated_flag", (DL_FUNC) &_beachball_duplicated_flag, 1},
    {"_beachball_quantile_init_rcpp", (DL_FUNC) &_beachball_quantile_init_rcpp, 3},
    {"_beachball_check_medoids", (DL_FUNC) &_beachball_check_medoids, 3},
    {"_beachball_SCALE", (DL_FUNC) &_beachball_SCALE, 3},
    {"_beachball_mini_batch_kmeans", (DL_FUNC) &_beachball_mini_batch_kmeans, 13},
    {"_beachball_type_integer_index", (DL_FUNC) &_beachball_type_integer_index, 1},
    {"_beachball_type_numeric_index", (DL_FUNC) &_beachball_type_numeric_index, 1},
    {"_beachball_make_to_string", (DL_FUNC) &_beachball_make_to_string, 1},
    {"_beachball_get_class", (DL_FUNC) &_beachball_get_class, 1},
    {"_beachball_get_safe_slot", (DL_FUNC) &_beachball_get_safe_slot, 2},
    {"_beachball_transfer_data", (DL_FUNC) &_beachball_transfer_data, 1},
    {"_beachball_Week4_mini_batch_kmeans", (DL_FUNC) &_beachball_Week4_mini_batch_kmeans, 13},
    {"_beachball_matrix_mean", (DL_FUNC) &_beachball_matrix_mean, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_beachball(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
