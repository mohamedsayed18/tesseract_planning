^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package tesseract_motion_planners
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.6.8 (2021-12-01)
------------------
* Fix bug in trajopt ifopt default plan profile
* Contributors: Levi Armstrong

0.6.7 (2021-11-30)
------------------
* Fix trajopt ifopt composite profile check for adding collision
* Contributors: Levi Armstrong

0.6.6 (2021-11-29)
------------------
* Add acceleration and jerk ifopt support
* CollisionConstraintConfig set default type to DISCRETE_CONTINUOUS
* Fix ability to use same task with different parameters adding namespaces to the profile dictionary
* Update CI docker tag and target linking order (`#135 <https://github.com/tesseract-robotics/tesseract_planning/issues/135>`_)
  * Update CI docker tag
  * Update target linking order
* Contributors: Levi Armstrong

0.6.5 (2021-11-11 15:50)
------------------------
* Add max_steps to lvs no IK simple planner
* Contributors: Levi-Armstrong

0.6.4 (2021-11-11 12:25)
------------------------
* Fix motion planner freespace example opw_kinematics include build error (`#131 <https://github.com/tesseract-robotics/tesseract_planning/issues/131>`_)
  * Fix example opw_kinematics include build error
  * Update working_frame and tcp_frame for all motion planner examples
* Add lvs simple planner that does not use inverse kinematics and set as default
* Contributors: Chen Bainian, Levi-Armstrong

0.6.3 (2021-11-03)
------------------
* Move problem generator inside the motion planner
* Add profile dictionary to planning request
* Contributors: Levi-Armstrong

0.6.2 (2021-10-29)
------------------
* Update to leverage environment getGroupJointNames (`#123 <https://github.com/tesseract-robotics/tesseract_planning/issues/123>`_)
  * Update to leverage environment getGroupJointNames
  * Update CI docker tag to 0.6.2
* Contributors: Levi Armstrong

0.6.1 (2021-10-20)
------------------
* Merge pull request `#122 <https://github.com/tesseract-robotics/tesseract_planning/issues/122>`_ from marip8/update/ci
  CI Update
* Updated install/export of motion planner targets
* Contributors: Michael Ripperger

0.6.0 (2021-10-13)
------------------
* Fix clang tidy errors
* Fix getRobotConfig to work with JointGroup
* Fix bug in trajopt and trajopt_ifopt problem generator
* Update tesseract_process_managers to leverage JointGroup and KinematicGroup
* Update tesseract_motion_planners to leverage JointGroup and KinematicGroup
* Update due to changes related to trajopt
* Update based on change in trajopt ifopt (`#90 <https://github.com/tesseract-robotics/tesseract_planning/issues/90>`_)
  Co-authored-by: cbw36 <cwolfe1996@gmail.com>
* Motion Planner Package Reorganization (`#114 <https://github.com/tesseract-robotics/tesseract_planning/issues/114>`_)
  * Moved motion planners core code into core subdirectory
  * Moved simple planner into core subdirectory
  * Moved Descartes planner to new subdirectory
  * Moved OMPL planner to new subdirectory
  * Moved Trajopt planner to new subdirectory
  * Moved Trajopt IFOPT planner to new subdirectory
  * Revised main CMakeLists.txt; added options for building planner implementations
  * Reference CMake options for building tests and examples
  * Update dependencies on Descartes
  * Add dependency on tesseract collision
* Update to latest descartes and fully integrated changes with kinematic redundant solutions (`#106 <https://github.com/tesseract-robotics/tesseract_planning/issues/106>`_)
  * Update to latest descartes and fully integrated changes with kinematic redundant solutions
  * Update descartes hash in rosinstalls
  * fixup
  * Update dependencies.rosinstall
  * Update dependencies_with_ext.rosinstall
  * Update dependencies.rosinstall
  * Update dependencies.rosinstall
* Update Descartes planner (`#87 <https://github.com/tesseract-robotics/tesseract_planning/issues/87>`_)
  * Update headers and interfaces for Descartes
  * Update robot sampler
  * Add state evaluator to Descartes plan profile
  * Update .rosinstall
  * Bumped Tesseract hash in .rosinstall
  * Remove references to descartes_samplers descartes_opw
  * Update robot sampler constructor for clang-tidy
  * Added documentation to Descartes default profile
  * Remove unused Descartes utilities function
  * Move graph construction and search into try-catch block
  * Updated .rosinstall files for later Descartes dependency
  * Fixed nightly build CI configuration
* Update rosinstall with tag/hash and create an unstable CI build using master branches (`#82 <https://github.com/tesseract-robotics/tesseract_planning/issues/82>`_)
* Allow setting planner name
* Clean up getRobotConfig and rename getRedundancy to getJointTurns
* Fix robot config redundancy calculation
* Remove unused parameter from descartes default plan profile
* Add missing boost header in trajopt default plan profile
* Add missing depends Threads to tesseract_motion_planners
* Remove unused class_loader includes
* Fix passing of meta information in simple planner and min_seed_length
* Make Instruction and Waypoint default constructor private
* Switch type erasure cast methods to return references instead of pointer
* Rename Instruction and Waypoint cast and cast_const to as
* Remove NullWaypoint and NullInstruction types
* Switch over command language to using boost serialization
* Update descartes planner to use default values for satisfiesPositionLimits
* Enable OMPL to plan for paths with more than one instruction (`#49 <https://github.com/tesseract-robotics/tesseract_planning/issues/49>`_)
  * Enable OMPL to plan for paths with more than one instruction
  * Rebase on latest and update unit test
  Co-authored-by: Levi Armstrong <levi.armstrong@swri.org>
* Enforce bounds on seed pulled from environment current state
* Increase descartes assert epsilon for satisfiesPositionLimits check
* Run enforce bounds on result trajectory for all motion planners
* Check start and goal bounds
* Fix ProfileDictionary use and profile entries in Python
* Update due to changes with CollisionMarginData
* Update to use boost targets (`#46 <https://github.com/tesseract-robotics/tesseract_planning/issues/46>`_)
* Switch to using Eigen target
* Add Set Tool Instruction
* Update descartes and ompl to leverage CollisionCheckConfig
* Add profile overrides to Move, Plan, and Composite Instructions
* Fix misc typos
* Fix toDelimitedFile unit test
* Add boost serialization for the command language along with unit tests
* Update robot config with new kinematics interface
* Update to new forward and inverse kinematics interface
* Update to latest tesseract_environment changes
* Add link directories for ompl to support windows
* Update cmake_common_scripts to ros_industrial_cmake_boilerplate
* Update to latest descartes_light
* Fixes to trajopt_ifopt planner
* Fix toleranced waypoints being added as "fixed" in trajopt planner
* Fix passing tolerances through Trajopt planner
* Switch tesseract descartes to use float by default
* Update due to changes in tesseract_visualization interface
* Remove setters and getters and make variable public in simple planner profiles
* Move step generator code into the profile classes
* Improve simple planner profiles to handle working frame
* Update packages package.xml to include buildtool_depend on cmake and exec_depend on catkin
* Add TrajOpt Ifopt planner (`#443 <https://github.com/tesseract-robotics/tesseract_planning/issues/443>`_)
* Update planners to use CollisionCheckConfig
* Update motion planners to account for Joint and State Waypoints unordered joints relative to kinematics
* Add support for external tcp attached to kinematic link
* Utilize  parameter in TrajOpt planner
* Update to use initialize_code_coverage() macro and compiler definition
* Extract package name and version from package.xml
* Get Robot Redundancy (`#486 <https://github.com/tesseract-robotics/tesseract_planning/issues/486>`_)
  Co-authored-by: Colin Lewis <ctlewis@swri.org>
  Co-authored-by: David Merz, Jr <david.merz@swri.org>
* Fix message in default ompl plan profile
* Update to clang-tidy version 10
* Make non-virtual-dtor errors
* Remove deprecated collision class methods and utility functions
* Python package updates for command language
* Make changes to better support python wrapping
* Remove tesseract package
* Add external tool center point support
* Add generateNaiveSeedGenerator function
* Add TrajOpt Solver Profile
* Clean up warnings related to setContactDistanceThreshold
* Fix bug in createCollisionTermInfo
* Update ProfileDictionary and add additional unit tests
* Update state sampler allocator function signature
* Add doxygen and a few bug fixes
* Make profiles and ProfileDictionary const
* Fix issue in lvs cart cart interpolation
* Restructure taskflow generators to support composition
* Add profile dictionary
* Create process planning server
* Add CollisionCheckConfig
* Fix bug in simple planner not resetting start waypoint
* fix lvs process flow and step calculation
* Add clone method to moiton planner base class
* Add vertex evaluator to descartes
* Fix constraint from error function in trajopt plan profile
* Move ManipulatorManager into Environment
* Add seed min length process generator and unit tests
* Update unit tests and fix lvs_interpolation
* Updated uses of fixed size interpolation to lvs interpolation
* Updated lvs tests to be more thorough
* Fix bug in trajopt default problem generator not getting composite profile correctly
* Fix SimplePlanner step generators to correctly set profile
* Add ProfileSwitchProcessGenerator
  This generator simply returns a value specified in the composite profile. This can be used to switch execution based on the profile
* Add utility for getting profiles (`#412 <https://github.com/tesseract-robotics/tesseract_planning/issues/412>`_)
* Enable tesseract_motion_planners build on windows
* Address console bridge issue `#91 <https://github.com/tesseract-robotics/tesseract_planning/issues/91>`_
* Fix to handle console_bridge target renaming in noetic
* Separate public and private compiler option and add back -mno-avx
* Add individual CI badges and Windows CI build
* Check validity of longest valid segment
* Add visibility control to all packages
* Update due to changes in descartes compound edge evaluator
* Remove inheritance of Eigen::VectorXd from Joint Waypoint
* Rename buffer_margin to safety_margin for consistency
* Change Tesseract findTCP to throw exception when not found and update planners to handle this exception
* Switch from Cast Continuous to Discrete Continuous
* Update default longest valid segment length
* Fix ompl default plan profile not setting planning time
* Fix descartes handeling of freespace plan types
* Add simple planner longest valid segment interpolation (`#385 <https://github.com/tesseract-robotics/tesseract_planning/issues/385>`_)
  Co-authored-by: Stevie Dale <steven.dale@swri.org>
* Update REP and ROP Kinematics along with ManipulatorInfo TCP support
* Add manipulator manager to support tracking changes in the future
* Add clang static analyzers
* Leverage cmake_common_scripts
* Clean up tesseract_process_managers and tesseract_motion_planners package
* Add motion planner serialization (`#356 <https://github.com/tesseract-robotics/tesseract_planning/issues/356>`_)
* Split command_language_utils into multiple files
* Add simple process manager and planner profile mapping
* Add BiTRRT Configurator
* Add debugging information when planning fails due to collisions
* Change OMPL default safety margin to 0.0
  This essentially removes the 0.025 inflation that was added previously.
* Fix const and indexing issue in tesseract planning
* Add support for velocity and acceleration limits
* Add discrete and continuous process generators
* remove dependency descartes_opw
* Add new JointWaypoint constructor and fix clang tidy errors
* Switch to using unique pointer for Process Generator
* Make command language utility function generic and move planner specific ones to motion planners package
* Get tesseract process managers working
* Improve support for state waypoint in simple motion planner
* Update tesseract_command_language and tesseract_motion_planners
* Make requested changes
* Remove unused header from motion planning example
* Add unit tests for fixed size assign position
* Update/Add examples to leverage ignition visualization
* Update motion planners to leverage new flatten utils and non-const getWaypoint
* Address requested changes
* Add missing SHARED to libraries
* Add skeleton unit test for fixed size assign position
* Update motion planner example
* Address todo's in tesseract_motion_planners
* Fix simple planner fixed size interpolate unit tests
* Handle multple solutions in fixed_size_interpolate.cpp
* Fix motion planners unit tests
* Bring back generateSeed, add readme, and add task validators
* tesseract_motion_planners: Alphabetize CMake targets
* Add SimpleMotionPlanner
  The simple planner is meant to be a tool for assigning values to the seed. The planner simply loops over all of the PlanInstructions and then calls the appropriate function from the profile. These functions do not depend on the seed, so this may be used to initialize the seed appropriately using e.g. linear interpolation.
* Replace position, velocity, etc in MoveInstruction with StateWaypoint
  This will allow us to change what the results of planners are without changing the MoveInstruction interface
* Add ManipulatorInfo to PlanInstruction
* Misc improvements and rebase fixes
  Modify examples so the complete successfully and clean some things
* Update Defaults and add ability to abort process
* Add missing include
* Add simple motion planning example using command language
* Fix ompl planner unit test
* Add missing license and warnings macro to files
* Switch setStartWaypoint to setStartInstruciton and update planners
* Fix descartes processing of results to handle freespace correctly
* Fix use of flatten functions and fix trajopt problem generator
* Tesseract_planning: Add data to request/response
* Move Flatten Utilities into tesseract_command_language
* Add option to include composites in results when flattening
* Tesseract planners: Make solve method const
* Simplify instruction class signature and utility functions
* Clang format
* Descartes planner: Copy solution into response
* Fix motion planner unit tests
* Fix trajopt and descartes missed merge issues
* Bug Fixes
* Refactor OMPL to use request/response
* Refactor Descartes to use request/response
* Refactor TrajOpt to use request/response
* Change how start waypoint is defined, now provided by CompositeInstruction
* Clang format
* Update OMPL planner to support cartesian waypoints and supporting unit tests
* Remove hybrid planners
* Add Flatten utility
* Improve descartes collision edge evaluator unit run time
* Clang-Format
* Update ompl to use new kinematics objects and fix clang-tidy
* Update descartes to only use new tesseract_kinematics objects
* Update OMPL to leverage command language
* Remove hybrid planners
* Working descartes unit tests with command language
* Working trajopt unit tests with command language
* Update generateSeed utility function for linear
* First pass at updating tesseract_motion_planners unit test with command language
* Move new planner profiles to tesseract_motion_planners
* Add tesseract_command_language package
* Added fixed timesteps to TrajOpt config
* Setting Active collision objects for the contact managers in trajopt motion planner
* Bugfix when OMPL simplifies down to two states and trajopt was assuming > 2, so segfaulting
* Add COLCON environment hooks to update ROS_PACKAGE_PATH
* Add Noetic CI Build (`#305 <https://github.com/tesseract-robotics/tesseract_planning/issues/305>`_)
  * Add Noetic CI build
  * remove redundant move
  * Add missing static_casts
  * remove more redundant moves
  * Another redundant move
  * Remove old header.
  * Add Python 3.8
  * Add Colcon environment hooks for Python packages
  * Bump tesseract_viewer_python required cmake version to 3.5.0
  * Add python version to tesseract_viewer_python
  * Source workspace before testing
  * Remove after script
  The tests are being run by colcon anyway
  Co-authored-by: Matthew Powelson <powelson.matthew@gmail.com>
* Add colcon.pkg files to all packages (`#303 <https://github.com/tesseract-robotics/tesseract_planning/issues/303>`_)
  * Add colcon.pkg files to all packages
  Addresses issue `#302 <https://github.com/tesseract-robotics/tesseract_planning/issues/302>`_ as discussed on rosdep issue 724.
  * tesseract_collision: Remove pluginlib workaround
  This is now handled in the tesseract_configure_package macro
  * Add benchmark to the xenial nightly build skip keys
* Rewrite of the srdf model class within tesseract (`#292 <https://github.com/tesseract-robotics/tesseract_planning/issues/292>`_)
  * Clean up SRDFModel and restructure
  * Add opw kinematic parsing to srdfmodel and update tesseract python
  * Fix SWIG Python data types in srdf_model.i
  * Add new construction method to joint waypoint type
  * Move SRDFModel OPWKinematicsParameters structure outside the class
  * Fix SWIG build error in sdf_model.i
  * Clang format and fix random number definition
  * Remove unsupported methods in TinyXML2 in Kinetic
  * Expose resource locator in tesseract object
  * Modify collision large dataset unit to print information
  * Break up srdf_model.cpp into smaller files and fix requested changes
  Co-authored-by: John Wason <wason@wasontech.com>
* Add ability to provided IsContactResultValid function in contact request.
  * Added special collision pairs for trajopt planner
  * Added capablities to allow negative special collision pairs to pass post-check
  * Removed commented code
  * Clang formatting
  * Removed unnecessary lines
  * Removed unused variables
  * Changed collision pairs to use safetyMarginData type
  * changed nullptr assignment
  * Moved negative collision checking into trajectoryValid function
  * Clang formatting
  * Fixed build test failing
  * Clean up
  * Fix clang-tidy errors
  Co-authored-by: Tyler Marr <tyler.marr@swri.org>
  Co-authored-by: Levi Armstrong <levi.armstrong@gmail.com>
* Store joint transforms in EnvState structure (`#265 <https://github.com/tesseract-robotics/tesseract_planning/issues/265>`_)
* Explictily instantiate Descartes Hybrid planner
  Indeed, this template is defined in a .cpp so it needs to have explicit
  instantiation, done for double and float
* Fix error message for samplers in Descartes
  It used to say that the number of waypoints was wrong
* Add code coverage macros and add code coverage to packages
* Configurable post-plan collision check (`#247 <https://github.com/tesseract-robotics/tesseract_planning/issues/247>`_)
  * Added trajectory validator class
  * Updated planner base class to use trajectory validator class
  * Updated planners to use trajectory validator class
  * Updated python interface
  * Updated OMPL TrajOpt unit test
  * Clang format
* Disable ompl trajopt hybrid unit test
* Adjust ompl trajopt hybrid unit test
* Modify hybrid ompl trajopt planner to set range on ompl planner
* Fix ompl kinetic unit tests
* Remove additional planners from the ompl unit tests
* Adjust ompl unit tests and add asserts
* Only add state collision validator when continuous_collision is false
* Add ompl glass up right example
* Move ompl constrained to its own config
* Use ompl state extractor to eigen and add state validator
* Update to use generic method for extracting data out of ompl state
* Add ability to add constraints to ompl planner
* Remove OMPL EST planner from the unit tests
* Adjust Departure Generator (`#228 <https://github.com/tesseract-robotics/tesseract_planning/issues/228>`_)
  * Adjust Departure Generator
  * Moving extension departure generator to separate file
  * Removing Whitespace to Appease Clang
  * Adding License to Extension Departure Generator
  * Adding License Text to tesseract_planning Files
  * Adding @briefs to the comment blocks at head of tesseract_planning files
* Update ompl trajopt hybrid test to only add collision as a constraint
* Use the ompl seed trajectory to set trajopt num_steps in hybrid planner
* Fix ompl unit tests
* Trajopt Planner: Set init data when using JOINT_INTERPOLATED
  Currently JOINT_INTERPOLATED is unusable since the data is not set.
* Add JOINT_WAYPOINT to fixed_steps list only if it isCritical
  Currently it treats any joint position waypoint as fixed which may not be the case depending on the coefficient
* Modify OMPL planner and config to accept multiple planner types
* Add ability to merge a SceneGraph into another one (`#219 <https://github.com/tesseract-robotics/tesseract_planning/issues/219>`_)
  * Allow to merge a SceneGraph into another one
  Needed to create prefixed copy operators for links and joints
  * Delete Link & Joint copy constructor / assignment
  This means a large refactoring of the codebase to remove all instances
  - Add some functions that take a Ptr as argument, to avoid having to
  move instances being pointed at
  - Add calls to std::move where appropriate
  - Modify the code to no longer use moved instances
  * Use std::move in tesseract_rosutils
  * Use std::move in tesseract_scene_graph unit tests
  * Use std::move in tesseract_motion_planners
  * Use std::move in tesseract_rviz
  * Use std::move in tesseract_examples
  * Update tesseract_python to support move semantics
  This requires the introduction of 3 changes:
  - In scene_graph, only bind Ptr versions
  - In environment, introduce custom wrappers that copy the incoming Ptr
  - In msg conversions, use a new macro type that moves the return value
  into a Ptr
  * Fix the clang-tidy warnings
  * Make adding of joints / links pointers protected
  This ensures that nobody can modify the scene graph once built
  This required a tiny hack in the URDF parser, we should upgrade the
  interface to unique pointers in the future.
  * Update documentation for addSceneGraph
  * Make name\_ a non-const member of Joint and Link
  * Fix tesseract_python to clone the links
  They can only be passed by pointer
  * Wrap <queue> include with ignore warnings macros
  * Use variables for joint & link names in tests
  This only concerns tesseract_environment_unit for now
  * Fix test: was using link after moving it
  Created a variable to hold the name, and use that instead of getName()
* Add eigen to package.xml
  and alphabetize the entries.
* Expose trajopt collision term use_weighted_sum
* Set collision cost safety margin buffer to zero by default
* Add safety_margin_buffer fields to Tesseract Trajopt planner objects
* Fix missed disabling ompl planner hybirdization when config param optimize set to true
* Restructure ompl to leverage config structures like the trajopt planner
* Add optimization capability for OMPL freespace planner
* Allow adding TrajOpt collision terms as both constraints and costs (`#210 <https://github.com/tesseract-robotics/tesseract_planning/issues/210>`_)
  * Add separate collisions terms for constraint and cost and expose in planner config
  * Add config structs for collision costs and constraints
  * Use 'enabled' instead of 'check'
  * Add missing license block
  * Clang format
  * Fix typo in license
  * Add swig wrapper for trajopt_collision_config.h
  * Add collision config members to Swig wrapper for default planner config
  * Fix collision enable/disable in tests
  * Update collision constraint def to new format
* Fix bug in descartes robot positioner sampler storing positioner limits as wrong type
* Change Eigen arguments that are passed by value to reference
* Fix bug in trajopt default config accessing nullptr
* Add useful operators to Joint and Cartesian Waypoints
* Make requested changes
* Update ompl freespace planner to use Parallel Plan with hybridization disabled
* Remove descrete collision check from ompl continuous motion validator
* Update to support trajopt new discrete continuous
* Update trajopt planner handling of fixed start and end states for collision
* Turned avoid singularity off by default
* Changed planner debug logging from debug to info
* Clang tidy updates
* Changed default waypoint constraint names
* Added avoid singularity to TrajOpt motion planner utils and default configuration
* Update due to changes in TrajOpt CollisionTerm supporting longest valid segment length
* Update motion planners post check to only use continuous contact checking
* Switch to using state solver in descartes edge evaluator and ompl motion validator
* Add descartes collision edge evaluator to descartes unit tests
* Update dates and add asserts
* Clang Formatting
* Add descartes collision edge evaluator
* Update checkTrajectory and supporting funtion to state solver and contact test type
* Add doxygen comment to contact_dist_threshold\_ member
* Add parameter to set DescartesCollision contact distance threshold
* Add processing of header files to clang-tidy
* Change how unit test are ran
* Set trajopt log level to Error to limit CI error log to long
* Fix ompl to obey collision safety margin
* Improve checkTrajectory, OMPL and TrajOpt planners by adding longest_valid_segment_fraction and longest_valid_segment_length
* Clang format
* Fix ompl planner response and verify final trajectory is collision free
* Address remaining compiler and clang tidy warnings
* Improve ompl handling of the number of output states
* Expose ability to set collision coeff in trajopt configs
* Add ability to add user defined trajopt constraint type and coeff
* Update based on Clang-Tidy
* Update based on Clang-Tidy and Clazy
* Fix issue with descartes pose sampler
* Update ompl trajopt hybrid planner to use new resoure locator api
* Use ResourceLocator class instead of ResourceLocatorFn (`#172 <https://github.com/tesseract-robotics/tesseract_planning/issues/172>`_)
  * Use Resource and ResourceLocator instead of locateResource function
  * More updates to use ResourceLocator
  * More updates to use ResourceLocator
  * Fix clang-format
  * Update Resource and ResourceLocator to use ROS Cpp style guidelines
  * Fix comments in resource_locator.cpp
  * Improve doxygen comments in resource.h and resource_locator.h
  * Clang format
* Added license to OMPL hybrid planner
* Added unit test for OMPL TrajOpt planner
* Added OMPL hybrid planner
* Add check in trajopt config for start joint waypoint not matching seed trajectory start
* Adjust for joint waypoint joint name order
* Add name to tesseract trajopt planner constraint from error function
* Update trajopt planner to use trajopt UserDefinedTermInfo for error functions
* OMPL Planner Simplification (`#160 <https://github.com/tesseract-robotics/tesseract_planning/issues/160>`_)
  * Updated OMPL config structure
  * Updated OMPL unit to use typed test to test all OMPL planners
  * Clang format
  * Reorganized collision checking logic
  * Added optional interpolation parameter to OMPL config
  * Turned off continuous collision checking, added interpolation, and increased planning time in OMPL test
* Trajopt Planner: Switch setConfiguration to pass shared_ptr by value
  When passed by reference, calling clear on the planner also clears the config that was passed in. If it is by reference, you will just be setting the planners config to nullptr not the original.
* Exposes joint weighting in trajopt default configuration
* Add iterators to process segment definition class
* Trajopt Planner: Expose QP Solver selection
* Allow is_valid nullptr for descartes samplers
* Fix casting of float array to Eigen VectorXd in descartes_collision.hpp
* Add constraint from error function option to the trajopt default config
* Add cmake macros to simplify cmake files
* Use GTest named targets instead of lib and include
  ${GTEST_BOTH_LIBRARIES} becomes GTest::GTest and GTest::Main
  GTEST_INCLUDE_DIRS is no longer needed
* Rename class and document new code
* Add descartes sampler for a single manipulator
* Switch to using descartes samplers for railed and positioner systems
* Add descartes collision, railed kinematics and positioner kinematics
* Updated planner inheritance; added licenses; changed header include symbols
* Merged TrajOpt planner config base with planner config
* Clang formatting
* Added check for joint waypoint in first or last position for default TrajOpt planner config
* Updated trajopt motion planner test
* Updated Descartes hybrid planner with new configuration classes
* Removed TrajOpt array and freespace planners
* Created TrajOpt configuration classes and utilities
* Created TrajOpt planner configuration abstract base class with a method to create a TrajOptProb. Updated the TrajOpt motion planner to utilize the base configuration class
* delete unused #include <ros/console.h>
* Add ctest output log
* Fix ctest verbose output
* Updated TrajOpt planner unit test
* Clang formatting
* Updates to generators and examples to utilize cartesian pose getParentTransform method
* Updated Cartesian waypoint to hold a link relative to which its transformation is relative
* Updated joint toleranced waypoint to inherit from joint waypoint
* Clean up urdfdom references
* Add AVX warning when compiling with non-GNU compiler
* Add -mno-avx as compile option to fix Eigen Alignment Issues
* Descartes_tesseract_kinematics: Add license and harmonizeTowardsZero
* Add DescartesTesseractKinematics wrapper
  This adds a wrapper for a TesseractKinematics object such that it can be used with Descartes. It has currently only been tested with the default KDL kinematics
* Add addition doxygen, unit tests, and clang format  addressing PR comments
* Add discrete checking to ompl continuous motion validator to catch self collisions
* clang format
* Add descartes motion planner unit test
* Add num_threads to descartes config and remove use of ROS_ERROR for descartes planner
* ompl freespace check start and end position for collision
* Add isValid check in continuous and discrete motion validators
* Add discrete motion validator and cache contact managers in validators
* Update ompl freespace planner to use OMPL OptimizePlan
* Fix compiler warnings in waypoint.h
* Add license to new ompl files and add doxygen
* Add ompl planner specific setting and fix naming
* Switch to use Valid State Sampler to avoid cloning contact manager for every isValid check
* Update OMPL planner to planner interface
* Clang format
* Changed logic to fail if optimizer does not converge
* Updated planners to implement changed in base class solve method
* Updated motion planner base class solve method to take optional verbosity argument
* Add succeeded waypoints and failed waypoints to PlannerResponse
* clang format
* Update to allow null collision interface for descartes planner
* Fix descartes config struct
* Add JointTrajectory structure
* Update waypoint types with constructors and setters and getters
* Clean up descartes planner
* Update planners to use status code and add descartes planner and descartes-trajopt hybrid planner
* Correct planners to fill out response when not configured
* Add TrajOpt Planner unit tests
  These tests test the TrajOptArrayPlanner and the TrajOptFreespacePlanner. They primarily check that the correct types
  of costs and constraints are added when the flags like smooth_velocity are specified. However they are not foolproof.
  They only check that at least one term of the correct type is in the cost or constraint vector. If there should be
  more than one, then it might not be caught. This could be improved in the future, but it is better than nothing.
  Additional features that could be tested in the future
  * Configuration costs added correctly
  * Intermediate waypoints added correctly to freespace
  * coeffs set correctly
  * init info is set correctly
  * Seed trajectory is set correctly
  * callbacks are added correctly
  * Number of steps are obeyed for freespace
  * continuous collision checking flag set correctly
* Add dependencies for tests on package libraries
* Fix clang warnings
* Update rosdep keys in package.xml
* Clange format version 8
* Unify shared pointer definition and switch typedef to using
* Create process planning package (`#16 <https://github.com/tesseract-robotics/tesseract_planning/issues/16>`_)
  * added the tesseract_process_planning package
  * added the conversions header to the tesseract_rosutils package
  * added the improvements made by @mpowelson to the process definition methods
  * renamed tesseract_process_planning to ...planners for consistency
  * reinstated previous dependencies in cmake file
  * corrected namespaces and header guards
  * renamed some directories in tesseract_process_planners and documented a base class
  * renamed tesseract_planners to tesseract_motion_planners
  * renamed the base class BasicPlanner to MotionPlanner
  * renamed from_home field to from_start
  * improvements to the tesseract MotionPlanner interface and trajopt derived classes
  * removed the const attribute from all the solve(...) methods
  * Clean up cmake add missed renaming from tesseract_planners to tesseract_motion_planners
* Contributors: Colin Lewis, DavidMerzJr, Hervé Audren, John Wason, Joseph Schornak, Josh Langsfeld, Levi Armstrong, Levi-Armstrong, Marco Bassa, Matthew Powelson, Michael Ripperger, Patrick Beeson, Tyler Marr, marrts, mpowelson, mripperger
