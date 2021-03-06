/*Auto Generated File, Don' Modified.*/
#include "backend/vulkan/shaders/VulkanShaderMap.hpp"
#include "backend/vulkan/shaders/AllShader.h"
namespace MNN {
void VulkanShaderMap::init() {
mMaps.insert(std::make_pair("glsl_nhwcToimage_comp", std::make_pair(glsl_nhwcToimage_comp,glsl_nhwcToimage_comp_len)));
mMaps.insert(std::make_pair("glsl_lstm_comp", std::make_pair(glsl_lstm_comp,glsl_lstm_comp_len)));
mMaps.insert(std::make_pair("glsl_deconvCol2Im_comp", std::make_pair(glsl_deconvCol2Im_comp,glsl_deconvCol2Im_comp_len)));
mMaps.insert(std::make_pair("glsl_lrnAcrossChannel_comp", std::make_pair(glsl_lrnAcrossChannel_comp,glsl_lrnAcrossChannel_comp_len)));
mMaps.insert(std::make_pair("glsl_softmaxHeight_comp", std::make_pair(glsl_softmaxHeight_comp,glsl_softmaxHeight_comp_len)));
mMaps.insert(std::make_pair("glsl_normalizeChannel_comp", std::make_pair(glsl_normalizeChannel_comp,glsl_normalizeChannel_comp_len)));
mMaps.insert(std::make_pair("glsl_convolutionDepthwiseMali_comp", std::make_pair(glsl_convolutionDepthwiseMali_comp,glsl_convolutionDepthwiseMali_comp_len)));
mMaps.insert(std::make_pair("glsl_convolutionDepthwiseMali_RELU_comp", std::make_pair(glsl_convolutionDepthwiseMali_RELU_comp,glsl_convolutionDepthwiseMali_RELU_comp_len)));
mMaps.insert(std::make_pair("glsl_convolutionDepthwiseMali_RELU6_comp", std::make_pair(glsl_convolutionDepthwiseMali_RELU6_comp,glsl_convolutionDepthwiseMali_RELU6_comp_len)));
mMaps.insert(std::make_pair("glsl_relu_comp", std::make_pair(glsl_relu_comp,glsl_relu_comp_len)));
mMaps.insert(std::make_pair("glsl_relu_IMAGE_comp", std::make_pair(glsl_relu_IMAGE_comp,glsl_relu_IMAGE_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryImage_comp", std::make_pair(glsl_unaryImage_comp,glsl_unaryImage_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryImage_SIGMOID_comp", std::make_pair(glsl_unaryImage_SIGMOID_comp,glsl_unaryImage_SIGMOID_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryImage_TANH_comp", std::make_pair(glsl_unaryImage_TANH_comp,glsl_unaryImage_TANH_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryImage_ABS_comp", std::make_pair(glsl_unaryImage_ABS_comp,glsl_unaryImage_ABS_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryImage_SQRT_comp", std::make_pair(glsl_unaryImage_SQRT_comp,glsl_unaryImage_SQRT_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryImage_RSQRT_comp", std::make_pair(glsl_unaryImage_RSQRT_comp,glsl_unaryImage_RSQRT_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryImage_NEG_comp", std::make_pair(glsl_unaryImage_NEG_comp,glsl_unaryImage_NEG_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryImage_SQUARE_comp", std::make_pair(glsl_unaryImage_SQUARE_comp,glsl_unaryImage_SQUARE_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryImage_EXP_comp", std::make_pair(glsl_unaryImage_EXP_comp,glsl_unaryImage_EXP_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryImage_SIGN_comp", std::make_pair(glsl_unaryImage_SIGN_comp,glsl_unaryImage_SIGN_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryImage_LOG_comp", std::make_pair(glsl_unaryImage_LOG_comp,glsl_unaryImage_LOG_comp_len)));
mMaps.insert(std::make_pair("glsl_im2col_comp", std::make_pair(glsl_im2col_comp,glsl_im2col_comp_len)));
mMaps.insert(std::make_pair("glsl_convolutionDepthwise_comp", std::make_pair(glsl_convolutionDepthwise_comp,glsl_convolutionDepthwise_comp_len)));
mMaps.insert(std::make_pair("glsl_convolutionDepthwise_RELU_comp", std::make_pair(glsl_convolutionDepthwise_RELU_comp,glsl_convolutionDepthwise_RELU_comp_len)));
mMaps.insert(std::make_pair("glsl_convolutionDepthwise_RELU6_comp", std::make_pair(glsl_convolutionDepthwise_RELU6_comp,glsl_convolutionDepthwise_RELU6_comp_len)));
mMaps.insert(std::make_pair("glsl_permute_comp", std::make_pair(glsl_permute_comp,glsl_permute_comp_len)));
mMaps.insert(std::make_pair("glsl_imageTonhwc_comp", std::make_pair(glsl_imageTonhwc_comp,glsl_imageTonhwc_comp_len)));
mMaps.insert(std::make_pair("glsl_BatchToSpaceND_comp", std::make_pair(glsl_BatchToSpaceND_comp,glsl_BatchToSpaceND_comp_len)));
mMaps.insert(std::make_pair("glsl_relu6_comp", std::make_pair(glsl_relu6_comp,glsl_relu6_comp_len)));
mMaps.insert(std::make_pair("glsl_relu6_IMAGE_comp", std::make_pair(glsl_relu6_IMAGE_comp,glsl_relu6_IMAGE_comp_len)));
mMaps.insert(std::make_pair("glsl_convolution_comp", std::make_pair(glsl_convolution_comp,glsl_convolution_comp_len)));
mMaps.insert(std::make_pair("glsl_convolution_RELU_comp", std::make_pair(glsl_convolution_RELU_comp,glsl_convolution_RELU_comp_len)));
mMaps.insert(std::make_pair("glsl_convolution_RELU6_comp", std::make_pair(glsl_convolution_RELU6_comp,glsl_convolution_RELU6_comp_len)));
mMaps.insert(std::make_pair("glsl_concatBuffer_comp", std::make_pair(glsl_concatBuffer_comp,glsl_concatBuffer_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryImage_comp", std::make_pair(glsl_binaryImage_comp,glsl_binaryImage_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryImage_ADD_comp", std::make_pair(glsl_binaryImage_ADD_comp,glsl_binaryImage_ADD_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryImage_SUB_comp", std::make_pair(glsl_binaryImage_SUB_comp,glsl_binaryImage_SUB_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryImage_MUL_comp", std::make_pair(glsl_binaryImage_MUL_comp,glsl_binaryImage_MUL_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryImage_DIV_comp", std::make_pair(glsl_binaryImage_DIV_comp,glsl_binaryImage_DIV_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryImage_VMAX_comp", std::make_pair(glsl_binaryImage_VMAX_comp,glsl_binaryImage_VMAX_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryImage_VMIN_comp", std::make_pair(glsl_binaryImage_VMIN_comp,glsl_binaryImage_VMIN_comp_len)));
mMaps.insert(std::make_pair("glsl_nchwToimage_comp", std::make_pair(glsl_nchwToimage_comp,glsl_nchwToimage_comp_len)));
mMaps.insert(std::make_pair("glsl_packAsImage4x4_comp", std::make_pair(glsl_packAsImage4x4_comp,glsl_packAsImage4x4_comp_len)));
mMaps.insert(std::make_pair("glsl_packAsImage4x4_TRANSPOSE_comp", std::make_pair(glsl_packAsImage4x4_TRANSPOSE_comp,glsl_packAsImage4x4_TRANSPOSE_comp_len)));
mMaps.insert(std::make_pair("glsl_roipooling_comp", std::make_pair(glsl_roipooling_comp,glsl_roipooling_comp_len)));
mMaps.insert(std::make_pair("glsl_softmax_comp", std::make_pair(glsl_softmax_comp,glsl_softmax_comp_len)));
mMaps.insert(std::make_pair("glsl_lstmSave_comp", std::make_pair(glsl_lstmSave_comp,glsl_lstmSave_comp_len)));
mMaps.insert(std::make_pair("glsl_imageTonchw_comp", std::make_pair(glsl_imageTonchw_comp,glsl_imageTonchw_comp_len)));
mMaps.insert(std::make_pair("glsl_softmaxHeight_NHWC_comp", std::make_pair(glsl_softmaxHeight_NHWC_comp,glsl_softmaxHeight_NHWC_comp_len)));
mMaps.insert(std::make_pair("glsl_resizeNearest_comp", std::make_pair(glsl_resizeNearest_comp,glsl_resizeNearest_comp_len)));
mMaps.insert(std::make_pair("glsl_reduce_comp", std::make_pair(glsl_reduce_comp,glsl_reduce_comp_len)));
mMaps.insert(std::make_pair("glsl_reduce_VMAX_comp", std::make_pair(glsl_reduce_VMAX_comp,glsl_reduce_VMAX_comp_len)));
mMaps.insert(std::make_pair("glsl_reduce_VMIN_comp", std::make_pair(glsl_reduce_VMIN_comp,glsl_reduce_VMIN_comp_len)));
mMaps.insert(std::make_pair("glsl_reduce_MEAN_comp", std::make_pair(glsl_reduce_MEAN_comp,glsl_reduce_MEAN_comp_len)));
mMaps.insert(std::make_pair("glsl_reduce_PROD_comp", std::make_pair(glsl_reduce_PROD_comp,glsl_reduce_PROD_comp_len)));
mMaps.insert(std::make_pair("glsl_reduce_SUM_comp", std::make_pair(glsl_reduce_SUM_comp,glsl_reduce_SUM_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryBuffer_comp", std::make_pair(glsl_unaryBuffer_comp,glsl_unaryBuffer_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryBuffer_SIGMOID_comp", std::make_pair(glsl_unaryBuffer_SIGMOID_comp,glsl_unaryBuffer_SIGMOID_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryBuffer_TANH_comp", std::make_pair(glsl_unaryBuffer_TANH_comp,glsl_unaryBuffer_TANH_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryBuffer_ABS_comp", std::make_pair(glsl_unaryBuffer_ABS_comp,glsl_unaryBuffer_ABS_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryBuffer_SQRT_comp", std::make_pair(glsl_unaryBuffer_SQRT_comp,glsl_unaryBuffer_SQRT_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryBuffer_RSQRT_comp", std::make_pair(glsl_unaryBuffer_RSQRT_comp,glsl_unaryBuffer_RSQRT_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryBuffer_NEG_comp", std::make_pair(glsl_unaryBuffer_NEG_comp,glsl_unaryBuffer_NEG_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryBuffer_SQUARE_comp", std::make_pair(glsl_unaryBuffer_SQUARE_comp,glsl_unaryBuffer_SQUARE_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryBuffer_EXP_comp", std::make_pair(glsl_unaryBuffer_EXP_comp,glsl_unaryBuffer_EXP_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryBuffer_SIGN_comp", std::make_pair(glsl_unaryBuffer_SIGN_comp,glsl_unaryBuffer_SIGN_comp_len)));
mMaps.insert(std::make_pair("glsl_unaryBuffer_LOG_comp", std::make_pair(glsl_unaryBuffer_LOG_comp,glsl_unaryBuffer_LOG_comp_len)));
mMaps.insert(std::make_pair("glsl_resizeBilinear_comp", std::make_pair(glsl_resizeBilinear_comp,glsl_resizeBilinear_comp_len)));
mMaps.insert(std::make_pair("glsl_nchwTonc4hw4_comp", std::make_pair(glsl_nchwTonc4hw4_comp,glsl_nchwTonc4hw4_comp_len)));
mMaps.insert(std::make_pair("glsl_nc4hw4Tonchw_comp", std::make_pair(glsl_nc4hw4Tonchw_comp,glsl_nc4hw4Tonchw_comp_len)));
mMaps.insert(std::make_pair("glsl_buffer2Image2D_comp", std::make_pair(glsl_buffer2Image2D_comp,glsl_buffer2Image2D_comp_len)));
mMaps.insert(std::make_pair("glsl_lstmGate_comp", std::make_pair(glsl_lstmGate_comp,glsl_lstmGate_comp_len)));
mMaps.insert(std::make_pair("glsl_SpatialProduct_comp", std::make_pair(glsl_SpatialProduct_comp,glsl_SpatialProduct_comp_len)));
mMaps.insert(std::make_pair("glsl_im2col1x1_comp", std::make_pair(glsl_im2col1x1_comp,glsl_im2col1x1_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryBroadcast_comp", std::make_pair(glsl_binaryBroadcast_comp,glsl_binaryBroadcast_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryBroadcast_ADD_comp", std::make_pair(glsl_binaryBroadcast_ADD_comp,glsl_binaryBroadcast_ADD_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryBroadcast_SUB_comp", std::make_pair(glsl_binaryBroadcast_SUB_comp,glsl_binaryBroadcast_SUB_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryBroadcast_MUL_comp", std::make_pair(glsl_binaryBroadcast_MUL_comp,glsl_binaryBroadcast_MUL_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryBroadcast_DIV_comp", std::make_pair(glsl_binaryBroadcast_DIV_comp,glsl_binaryBroadcast_DIV_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryBroadcast_VMAX_comp", std::make_pair(glsl_binaryBroadcast_VMAX_comp,glsl_binaryBroadcast_VMAX_comp_len)));
mMaps.insert(std::make_pair("glsl_binaryBroadcast_VMIN_comp", std::make_pair(glsl_binaryBroadcast_VMIN_comp,glsl_binaryBroadcast_VMIN_comp_len)));
mMaps.insert(std::make_pair("glsl_avgpool_comp", std::make_pair(glsl_avgpool_comp,glsl_avgpool_comp_len)));
mMaps.insert(std::make_pair("glsl_unPackImage4x4_comp", std::make_pair(glsl_unPackImage4x4_comp,glsl_unPackImage4x4_comp_len)));
mMaps.insert(std::make_pair("glsl_unPackImage4x4_TRANSPOSE_comp", std::make_pair(glsl_unPackImage4x4_TRANSPOSE_comp,glsl_unPackImage4x4_TRANSPOSE_comp_len)));
mMaps.insert(std::make_pair("glsl_SpaceToBatchND_comp", std::make_pair(glsl_SpaceToBatchND_comp,glsl_SpaceToBatchND_comp_len)));
mMaps.insert(std::make_pair("glsl_maxpool_comp", std::make_pair(glsl_maxpool_comp,glsl_maxpool_comp_len)));
mMaps.insert(std::make_pair("glsl_winogradTransformDest2_3_1_comp", std::make_pair(glsl_winogradTransformDest2_3_1_comp,glsl_winogradTransformDest2_3_1_comp_len)));
mMaps.insert(std::make_pair("glsl_winogradTransformDest2_3_1_RELU_comp", std::make_pair(glsl_winogradTransformDest2_3_1_RELU_comp,glsl_winogradTransformDest2_3_1_RELU_comp_len)));
mMaps.insert(std::make_pair("glsl_winogradTransformDest2_3_1_RELU6_comp", std::make_pair(glsl_winogradTransformDest2_3_1_RELU6_comp,glsl_winogradTransformDest2_3_1_RELU6_comp_len)));
mMaps.insert(std::make_pair("glsl_winogradTransformSource2_3_1_comp", std::make_pair(glsl_winogradTransformSource2_3_1_comp,glsl_winogradTransformSource2_3_1_comp_len)));
mMaps.insert(std::make_pair("glsl_blitC4_comp", std::make_pair(glsl_blitC4_comp,glsl_blitC4_comp_len)));
mMaps.insert(std::make_pair("glsl_col2Im_comp", std::make_pair(glsl_col2Im_comp,glsl_col2Im_comp_len)));
mMaps.insert(std::make_pair("glsl_col2Im_RELU_comp", std::make_pair(glsl_col2Im_RELU_comp,glsl_col2Im_RELU_comp_len)));
mMaps.insert(std::make_pair("glsl_col2Im_RELU6_comp", std::make_pair(glsl_col2Im_RELU6_comp,glsl_col2Im_RELU6_comp_len)));
mMaps.insert(std::make_pair("glsl_nc4hw4toimage_comp", std::make_pair(glsl_nc4hw4toimage_comp,glsl_nc4hw4toimage_comp_len)));
mMaps.insert(std::make_pair("glsl_imageTonc4hw4_comp", std::make_pair(glsl_imageTonc4hw4_comp,glsl_imageTonc4hw4_comp_len)));
mMaps.insert(std::make_pair("glsl_gemm16x16_comp", std::make_pair(glsl_gemm16x16_comp,glsl_gemm16x16_comp_len)));
mMaps.insert(std::make_pair("glsl_gemm16x16_FP16_comp", std::make_pair(glsl_gemm16x16_FP16_comp,glsl_gemm16x16_FP16_comp_len)));
mMaps.insert(std::make_pair("glsl_deconvolutionDepthwise_comp", std::make_pair(glsl_deconvolutionDepthwise_comp,glsl_deconvolutionDepthwise_comp_len)));
mMaps.insert(std::make_pair("glsl_deconvolutionDepthwise_RELU_comp", std::make_pair(glsl_deconvolutionDepthwise_RELU_comp,glsl_deconvolutionDepthwise_RELU_comp_len)));
mMaps.insert(std::make_pair("glsl_deconvolutionDepthwise_RELU6_comp", std::make_pair(glsl_deconvolutionDepthwise_RELU6_comp,glsl_deconvolutionDepthwise_RELU6_comp_len)));
mMaps.insert(std::make_pair("glsl_preluWithChannel_comp", std::make_pair(glsl_preluWithChannel_comp,glsl_preluWithChannel_comp_len)));
mMaps.insert(std::make_pair("glsl_deconvIm2Col_comp", std::make_pair(glsl_deconvIm2Col_comp,glsl_deconvIm2Col_comp_len)));
mMaps.insert(std::make_pair("glsl_deconvIm2Col_RELU_comp", std::make_pair(glsl_deconvIm2Col_RELU_comp,glsl_deconvIm2Col_RELU_comp_len)));
mMaps.insert(std::make_pair("glsl_deconvIm2Col_RELU6_comp", std::make_pair(glsl_deconvIm2Col_RELU6_comp,glsl_deconvIm2Col_RELU6_comp_len)));
mMaps.insert(std::make_pair("glsl_buffer2Image1D_comp", std::make_pair(glsl_buffer2Image1D_comp,glsl_buffer2Image1D_comp_len)));
mMaps.insert(std::make_pair("glsl_scale_comp", std::make_pair(glsl_scale_comp,glsl_scale_comp_len)));
mMaps.insert(std::make_pair("glsl_buffer2Image3D_comp", std::make_pair(glsl_buffer2Image3D_comp,glsl_buffer2Image3D_comp_len)));
mMaps.insert(std::make_pair("glsl_softmaxWidth_comp", std::make_pair(glsl_softmaxWidth_comp,glsl_softmaxWidth_comp_len)));
mMaps.insert(std::make_pair("glsl_softmaxChannel_comp", std::make_pair(glsl_softmaxChannel_comp,glsl_softmaxChannel_comp_len)));
}
}
