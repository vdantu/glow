/**
 * Copyright (c) Glow Contributors. See CONTRIBUTORS file.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "tests/unittests/BackendTestUtils.h"

using namespace glow;

std::set<std::string> glow::backendTestBlacklist = {
    "AdaptiveAvgPool/0",
    "AdaptiveAvgPoolNonSquare/0",
    "ArithAdd_float16_t/0",
    "ArithAdd_int32_t/0",
    "ArithAdd_int64_t/0",
    "ArithMax_float16_t/0",
    "ArithMax_int32_t/0",
    "ArithMax_int64_t/0",
    "ArithMin_float16_t/0",
    "ArithMin_int32_t/0",
    "ArithMin_int64_t/0",
    "ArithMul_float16_t/0",
    "ArithMul_int32_t/0",
    "ArithMul_int64_t/0",
    "ArithSub_float16_t/0",
    "ArithSub_int32_t/0",
    "ArithSub_int64_t/0",
    "AvgPool/0",
    "BasicAddNetFloatVsFloat16/0",
    "BasicAddNetFloatVsInt8/0",
    "BasicDivNetFloatVsFloat16/0",
    "BasicDivNetFloatVsInt8/0",
    "BasicMaxNetFloatVsFloat16/0",
    "BasicMaxNetFloatVsInt8/0",
    "BasicMinNetFloatVsFloat16/0",
    "BasicMinNetFloatVsInt8/0",
    "BasicMulNetFloatVsFloat16/0",
    "BasicMulNetFloatVsInt8/0",
    "BasicSubNetFloatVsFloat16/0",
    "BasicSubNetFloatVsInt8/0",
    "BatchAdd/0",
    "BatchBoxCox_Float16/0",
    "BatchedGather/0",
    "batchedReduceAdd_5Dinput/0",
    "batchedReduceAdd_Float16/0",
    "batchedReduceAddQuantized/0",
    "batchedReduceAddQuantizedWithAxis/0",
    "batchedReduceAddWithAxis_Float16/0",
    "batchedReduceAddWithAxis_Int8Q/0",
    "batchedReduceMeanQuantized/0",
    "batchedReduceMeanQuantizedWithAxis/0",
    "batchedReduceMeanUsingAvgPool/0",
    "batchedReduceMeanUsingAvgPoolQuantized/0",
    "batchedReduceMin_Float/0",
    "batchedReduceMin_Int32/0",
    "batchedReduceMin_Int64/0",
    "batchedReduceMinMultiAxis_Float/0",
    "batchedReduceMinMultiAxis_Int32/0",
    "batchedReduceMinMultiAxis_Int64/0",
    "batchedReduceZeroDimResult_Float/0",
    "batchedReduceZeroDimResult_Float16/0",
    "batchedReduceZeroDimResult_Int8/0",
    "BatchOneHotDataFloat/0",
    "BatchOneHotDataFloat16/0",
    "BatchOneHotDataInt64/0",
    "BatchOneHotDataInt8/0",
    "BoolTranspose2Dims/0",
    "Bucketize/0",
    "Clip/0",
    "CmpEQ/0",
    "CmpLTE/0",
    "ConcatTopK/0",
    "concatVectors_Bool/0",
    "concatVectors_Float16/0",
    "concatVectorsRepeated_Bool/0",
    "concatVectorsRepeated_Float16/0",
    "concatVectorsRepeated_Int32/0",
    "concatVectorsRepeated_Int64/0",
    "ConvertFrom_Float16Ty_To_Float16Ty/0",
    "ConvertFrom_Float16Ty_To_Float16Ty_AndBack/0",
    "ConvertFrom_Float16Ty_To_FloatTy/0",
    "ConvertFrom_Float16Ty_To_FloatTy_AndBack/0",
    "ConvertFrom_Float16Ty_To_Int32ITy/0",
    "ConvertFrom_Float16Ty_To_Int32ITy_AndBack/0",
    "ConvertFrom_Float16Ty_To_Int64ITy/0",
    "ConvertFrom_Float16Ty_To_Int64ITy_AndBack/0",
    "ConvertFrom_FloatTy_To_Float16Ty/0",
    "ConvertFrom_FloatTy_To_Float16Ty_AndBack/0",
    "ConvertFrom_FloatTy_To_Int32ITy/0",
    "ConvertFrom_FloatTy_To_Int32ITy_AndBack/0",
    "ConvertFrom_FloatTy_To_Int64ITy/0",
    "ConvertFrom_FloatTy_To_Int64ITy_AndBack/0",
    "ConvertFrom_Int32ITy_To_Float16Ty/0",
    "ConvertFrom_Int32ITy_To_Float16Ty_AndBack/0",
    "ConvertFrom_Int32ITy_To_FloatTy/0",
    "ConvertFrom_Int32ITy_To_FloatTy_AndBack/0",
    "ConvertFrom_Int32ITy_To_Int64ITy/0",
    "ConvertFrom_Int64ITy_To_Float16Ty/0",
    "ConvertFrom_Int64ITy_To_Float16Ty_AndBack/0",
    "ConvertFrom_Int64ITy_To_FloatTy/0",
    "ConvertFrom_Int64ITy_To_FloatTy_AndBack/0",
    "ConvertFrom_Int64ITy_To_Int32ITy/0",
    "ConvertFrom_Int64ITy_To_Int32ITy_AndBack/0",
    "convTest/0",
    "convTest_Float16/0",
    "DilatedConvolution/0",
    "DivSizeT/0",
    "dotProduct1D_Float16/0",
    "dotProduct1D_Int8/0",
    "dotProduct1D_Int8/0",
    "dotProduct2D_Float16/0",
    "dotProduct2D_Int8/0",
    "elementwiseLinear/0",
    "EntropyLossTest/0",
    "Exp/0",
    "ExpandDims_Float/0",
    "ExpandDims_Float16/0",
    "ExpandDims_Int8/0",
    "Exp_Float16/0",
    "FC_Float16/0",
    "FCGradientCheck/0",
    "Flatten_Float16Ty/0",
    "FloatArgMaxKeepDim/0",
    "FloatArgMaxNoKeepDim/0",
    "FloatMaxPoolWithArgmax/0",
    "FloatMaxPoolWithArgmaxTransposed/0",
    "FP16AdaptiveAvgPool/0",
    "FP16Add/0",
    "FP16AvgPool/0",
    "FP16BatchAdd/0",
    "FP16ConvolutionDepth10/0",
    "FP16ConvolutionDepth8/0",
    "FP16Matmul/0",
    "FP16Max/0",
    "FP16MaxPool/0",
    "FP16Reshape/0",
    "FP16SoftMax/0",
    "Fp16Splat/0",
    "FP16Transpose2Dims/0",
    "FusedRowwiseQuantizedSparseLengthsSum_Float16_AccumFloat/0",
    "FusedRowwiseQuantizedSparseLengthsSum_Float16_AccumFloat16/0",
    "FusedRowwiseQuantizedSparseLengthsWeightedSum_ConvertedFloat16/0",
    "FusedRowwiseQuantizedSparseLengthsWeightedSum_ConvertedFloat16_back_to_"
    "back/0",
    "FusedRowwiseQuantizedSparseLengthsWeightedSum_Float16_AccumFloat/0",
    "FusedRowwiseQuantizedSparseLengthsWeightedSum_Float16_AccumFloat16/0",
    "FusedRWQSLSAllZeroLengths_Float/0",
    "FusedRWQSLSAllZeroLengths_Float16/0",
    "GatherDataFloat16IdxInt32/0",
    "GatherDataFloat16IdxInt64/0",
    "GatherDataFloatIdxInt32/0",
    "GatherDataFloatIdxInt64/0",
    "GatherDataInt8IdxInt32/0",
    "GatherDataInt8IdxInt64/0",
    "GatherRangesDataFloat16IdxInt32/0",
    "GatherRangesDataFloat16IdxInt64/0",
    "GatherRangesDataFloatIdxInt32/0",
    "GatherRangesDataFloatIdxInt64/0",
    "GatherRangesDataInt64IdxInt32/0",
    "GatherRangesDataInt64IdxInt64/0",
    "GatherRangesDataInt8QIdxInt32/0",
    "GatherRangesDataInt8QIdxInt64/0",
    "GatherSizeT/0",
    "GroupConv3D/0",
    "GroupConvolution/0",
    "GroupDilatedConvolution/0",
    "GroupwiseQuantizedConvolution/0",
    "insertTensorTest/0",
    "Int16ConvolutionDepth10/0",
    "Int16ConvolutionDepth8/0",
    "Int8AdaptiveAvgPool/0",
    "Int8ConvolutionDepth10/0",
    "Int8ConvolutionDepth10/0",
    "Int8ConvolutionDepth8/0",
    "Int8ConvolutionDepth8/0",
    "Int8Log/0",
    "Int8Sigmoid/0",
    "Int8Tanh/0",
    "IntBatchedArith/0",
    "IntLookupTable/0",
    "IntMatMul/0",
    "LengthsToRanges/0",
    "less_broadcast_float/0",
    "less_float/0",
    "less_float16Cases/0",
    "less_floatCases/0",
    "less_int32Cases/0",
    "less_int64Cases/0",
    "less_int8/0",
    "Logit_Float/0",
    "Logit_Float16/0",
    "MaxPool/0",
    "ModuloInt32NoSignFollow/0",
    "ModuloInt32SignFollow/0",
    "ModuloInt64NoSignFollow/0",
    "ModuloInt64SignFollow/0",
    "NonCubicKernelConv3D/0",
    "NonCubicKernelConv3DQuantized/0",
    "NonCubicPaddingConv3D/0",
    "NonCubicStrideConv3D/0",
    "NonSquareKernelAveragePool/0",
    "NonSquareKernelConvolution/0",
    "NonSquareKernelMaxPool/0",
    "NonSquarePaddingAveragePool/0",
    "NonSquarePaddingConvolution/0",
    "NonSquarePaddingMaxPool/0",
    "NonSquareStrideAveragePool/0",
    "NonSquareStrideConvolution/0",
    "pow/0",
    "PReluSimple_Float/0",
    "PReluSimple_Float16/0",
    "QuantizedArgMaxKeepDim/0",
    "QuantizedArgMaxNoKeepDim/0",
    "QuantizedArithmeticRescaled/0",
    "QuantizedArithmeticUnrescaled/0",
    "QuantizedCmpLTEAndSelect/0",
    "QuantizedMaxPoolWithArgmax/0",
    "QuantizedMaxPoolWithArgmaxTransposed/0",
    "QuantizedTopK/0",
    "ReluSimple_Float/0",
    "ReluSimple_Float16/0",
    "replaceNaN_Float/0",
    "replaceNaN_Float16/0",
    "Reshape/0",
    "ResizeNearest_Float/0",
    "ResizeNearest_Float16/0",
    "ResizeNearest_Int16/0",
    "ResizeNearest_Int32/0",
    "ResizeNearest_Int8/0",
    "rowwiseQuantizedFCTest/0",
    "rowwiseQuantizedFCTestSymmetric/0",
    "rowwiseQuantizedSLWSTest/0",
    "RowwiseQuantizedSparseLengthsSum_Float/0",
    "RowwiseQuantizedSparseLengthsSum_Float16_AccumFloat/0",
    "RowwiseQuantizedSparseLengthsSum_Float16_AccumFloat16/0",
    "RowwiseQuantizedSparseLengthsWeightedSum_Float/0",
    "RowwiseQuantizedSparseLengthsWeightedSum_Float16_AccumFloat/0",
    "RowwiseQuantizedSparseLengthsWeightedSum_Float16_AccumFloat16/0",
    "ScatterAddNDimensionalDuplicatingIndices/0",
    "ScatterAddNDimensionalSimple/0",
    "ScatterAddQuantized/0",
    "ScatterData/0",
    "ScatterDataNDimensional/0",
    "ScatterDataNDimensionalSimple/0",
    "ScatterDataQuantized/0",
    "Select/0",
    "SigmoidCrossEntropyWithLogits/0",
    "Sigmoid_Float16/0",
    "SigmoidSweep/0",
    "simpleCmpSelectPredication/0",
    "sliceConcatVectors_Float16/0",
    "sliceConcatVectors_Int64/0",
    "sliceReshape_Float16/0",
    "sliceVectors_Float16/0",
    "sliceVectors_Int64/0",
    "SLSAllZeroLengths_Float/0",
    "SLSAllZeroLengths_Float16/0",
    "SoftMax/0",
    "spaceToDepth_block2_Float/0",
    "spaceToDepth_block2_int8/0",
    "spaceToDepth_block3_Float/0",
    "spaceToDepth_block3_int8/0",
    "SparseLengthsSum_Float/0",
    "SparseLengthsSum_Float16/0",
    "SparseLengthsSumI8/0",
    "SparseLengthsWeightedSum_1D_Float/0",
    "SparseLengthsWeightedSum_1D_Float16/0",
    "SparseLengthsWeightedSum_2D_Float16/0",
    "SparseLengthsWeightedSumI8/0",
    "SparseToDense/0",
    "SparseToDenseMask1/0",
    "SparseToDenseMask2/0",
    "Split_Float16/0",
    "Squeeze/0",
    "Tanh/0",
    "Tanh_Float16/0",
    "testBatchAdd_Float16/0",
    "testQuantizedBatchAdd/0",
    "TopK/0",
    "TopK1/0",
    "Transpose2Dims/0",
    "Transpose3Dims_Float16/0",
    "TransposeIntoReshapeOptim/0",
    "where_2d_broadcast_x_y_i8/0",
    "where_2d_wise_float/0",
    "where_2d_wise_i8/0",
    "where_element_wise_float/0",
    "where_row_wise_float/0",
};
