/* Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#pragma once
#include <cmath>
#include <vector>

#include "paddle/fluid/framework/eigen.h"
#include "paddle/fluid/framework/operator.h"
#include "paddle/fluid/framework/tensor.h"
#include "paddle/fluid/framework/tensor_util.h"
#include "paddle/fluid/platform/device_context.h"
#include "paddle/fluid/platform/enforce.h"

namespace paddle {
namespace operators {
namespace math {
template <typename DeviceContext, typename T, int Rank>
struct Transpose {
  void operator()(const DeviceContext& context,
                  const framework::Tensor& in,
                  framework::Tensor* out,
                  const std::vector<int>& axis);
};

void set_constant(const platform::DeviceContext& context,
                  framework::Tensor* tensor,
                  float value);

}  // namespace math
}  // namespace operators
}  // namespace paddle