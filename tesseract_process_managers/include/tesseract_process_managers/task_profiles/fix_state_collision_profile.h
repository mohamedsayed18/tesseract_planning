/**
 * @file fix_state_collision_profile.h
 * @brief Profile for process that pushes plan instructions to be out of collision
 *
 * @author Matthew Powelson
 * @date August 31. 2020
 * @version TODO
 * @bug No known bugs
 *
 * @copyright Copyright (c) 2020, Southwest Research Institute
 *
 * @par License
 * Software License Agreement (Apache License)
 * @par
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * @par
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef TESSERACT_PROCESS_MANAGERS_FIX_STATE_COLLISION_PROFILE_H
#define TESSERACT_PROCESS_MANAGERS_FIX_STATE_COLLISION_PROFILE_H

#include <tesseract_common/macros.h>
TESSERACT_COMMON_IGNORE_WARNINGS_PUSH
#include <memory>
#include <vector>
TESSERACT_COMMON_IGNORE_WARNINGS_POP

#include <tesseract_collision/core/types.h>

namespace tesseract_planning
{
struct FixStateCollisionProfile
{
  using Ptr = std::shared_ptr<FixStateCollisionProfile>;
  using ConstPtr = std::shared_ptr<const FixStateCollisionProfile>;

  enum class Settings
  {
    START_ONLY,
    END_ONLY,
    ALL,
    DISABLED
  };

  /** @brief Used to specify method used to correct states in collision */
  enum class CorrectionMethod
  {
    NONE,
    TRAJOPT,
    RANDOM_SAMPLER
  };

  FixStateCollisionProfile(Settings mode = Settings::ALL) : mode(mode)
  {
    collision_check_config.contact_request.type = tesseract_collision::ContactTestType::FIRST;
    collision_check_config.type = tesseract_collision::CollisionEvaluatorType::DISCRETE;
  }

  /** @brief Sets which terms will be corrected  */
  Settings mode;

  /** @brief Order that correction methods will be applied. These will be attempted in order until one succeeds or all
   * have been tried */
  std::vector<CorrectionMethod> correction_workflow{ CorrectionMethod::TRAJOPT, CorrectionMethod::RANDOM_SAMPLER };

  /** @brief Percent of the total joint range that a joint will be allowed to be adjusted */
  double jiggle_factor{ 0.02 };

  /** @brief Safety margin applied to collision costs/cnts when using trajopt to correct collisions */
  tesseract_collision::CollisionCheckConfig collision_check_config;

  /** @brief Number of sampling attempts if TrajOpt correction fails*/
  int sampling_attempts{ 100 };
};
}  // namespace tesseract_planning
#endif  // TESSERACT_PROCESS_MANAGERS_FIX_STATE_COLLISION_PROFILE_H
