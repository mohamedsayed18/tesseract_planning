^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package tesseract_command_language
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.6.8 (2021-12-01)
------------------

0.6.7 (2021-11-30)
------------------

0.6.6 (2021-11-29)
------------------
* Fix ability to use same task with different parameters adding namespaces to the profile dictionary
* Contributors: Levi Armstrong

0.6.5 (2021-11-11 15:50)
------------------------

0.6.4 (2021-11-11 12:25)
------------------------

0.6.3 (2021-11-03)
------------------

0.6.2 (2021-10-29)
------------------

0.6.1 (2021-10-20)
------------------

0.6.0 (2021-10-13)
------------------
* Update tesseract_command_language based on ManipulatorInfo change
* Update based on change in trajopt ifopt (`#90 <https://github.com/tesseract-robotics/tesseract_planning/issues/90>`_)
  Co-authored-by: cbw36 <cwolfe1996@gmail.com>
* Add trajectory container class to abstract command lanaguage from time parameterization (`#44 <https://github.com/tesseract-robotics/tesseract_planning/issues/44>`_)
* Python Fixups (`#85 <https://github.com/tesseract-robotics/tesseract_planning/issues/85>`_)
* Fix conflict with windows macro max
* Address SWIG issues in command language
* Add missing header limits to command language utils
* Make Instruction and Waypoint default constructor private
* Switch type erasure cast methods to return references instead of pointer
* Rename Instruction and Waypoint cast and cast_const to as
* Add back NullInstruction and NullWaypoint Types
* Move serialize implementation to cpp based on boost documentation for shared libraries
* Remove NullWaypoint and NullInstruction types
* Switch over command language to using boost serialization
* Add SetAnalogInstruction
* Fix ProfileDictionary use and profile entries in Python
* Update to use boost targets (`#46 <https://github.com/tesseract-robotics/tesseract_planning/issues/46>`_)
* Switch to using Eigen target
* Add Set Tool Instruction
* Add profile overrides to Move, Plan, and Composite Instructions
* Fix toDelimitedFile unit test
* Fix compiler error for boost::is_virtual_base_of for versions prior to 1.67 (pagmo)
* Add boost serialization for the command language along with unit tests
* Add Missing Include Statement
* Update to new forward and inverse kinematics interface
* Merge pull request `#36 <https://github.com/tesseract-robotics/tesseract_planning/issues/36>`_ from mpowelson/feat/tolerance_xml
  Add Tolerances to joint/cartesian waypoint XML
* Template serialize/deserialize functions and add waypoint unit tests
* Add Tolerances to joint/cartesian waypoint XML
* Add operator == to CartesianWaypoint and JointWaypoint
* Add joint waypoint isToleranced unit test
* Use almostEqualRelativeAndAbs for checking if tolerances were provided
* Update cmake_common_scripts to ros_industrial_cmake_boilerplate
* Add tesseract_command_langauge package from tesseract repo
* Move tesseract_command_language out of tesseract_planning directory
* Add TrajOpt Ifopt planner (`#443 <https://github.com/tesseract-robotics/tesseract_planning/issues/443>`_)
* Update motion planners to account for Joint and State Waypoints unordered joints relative to kinematics
* Update to use initialize_code_coverage() macro and compiler definition
* Extract package name and version from package.xml
* Python package updates for command language
* Add missing colcon.pkg files
* Make changes to better support python wrapping
* Remove tesseract package
* Add external tool center point support
* Add SFINAE function signature check to command language
* Add SFINAE utils
* Improve error handling in joint and state waypoint
* Add wait and timer instruction to command language
* Add utility for getting profiles (`#412 <https://github.com/tesseract-robotics/tesseract_planning/issues/412>`_)
* Add unit test for generateSkeletonSeed
* Address console bridge issue `#91 <https://github.com/tesseract-robotics/tesseract_planning/issues/91>`_
* Fix to handle console_bridge target renaming in noetic
* Separate public and private compiler option and add back -mno-avx
* Add individual CI badges and Windows CI build
* Add visibility control to all packages
* Expose transpose method for Joint Waypoint
* Add print to waypoint
* Remove inheritance of Eigen::VectorXd from Joint Waypoint
* Remove inheritance of Eigen::Isometry3d from Cartesian Waypoint
* Remove inheritance of std::vector from Composite Instruction
* Improve trajectory player and add utility getJointNames from waypoint
* Update CompositeInstruction toXML so Null StartInstructions are not output
* Add isIdentical for two vectors of strings
* Update REP and ROP Kinematics along with ManipulatorInfo TCP support
* Add manipulator manager to support tracking changes in the future
* Refactor fix state bounds utils to eliminate repetitive inform msgs
* Leverage cmake_common_scripts
* Add fixStateBoundsProcessGenerator
* Add clampToJointLimits utility
* Split command_language_utils into multiple files
* Break up serialization and deserialization and make deserialization more flexible
* Add XML serialization to tesseract_command_language
* Fix const and indexing issue in tesseract planning
* Remove unused examples and dependencies from tesseract_command_language
* Add discrete and continuous process generators
* Add new JointWaypoint constructor and fix clang tidy errors
* Switch to using unique pointer for Process Generator
* Make command language utility function generic and move planner specific ones to motion planners package
* Get tesseract process managers working
* Update tesseract_command_language and tesseract_motion_planners
* Make requested changes
* Fix flatten utils and add non-const getWaypoint for Move and Plan Instruction
* Address requested changes
* Fix motion planners unit tests
* Bring back generateSeed, add readme, and add task validators
* Add SimpleMotionPlanner
  The simple planner is meant to be a tool for assigning values to the seed. The planner simply loops over all of the PlanInstructions and then calls the appropriate function from the profile. These functions do not depend on the seed, so this may be used to initialize the seed appropriately using e.g. linear interpolation.
* Replace position, velocity, etc in MoveInstruction with StateWaypoint
  This will allow us to change what the results of planners are without changing the MoveInstruction interface
* Add ManipulatorInfo to PlanInstruction
* Add missing license and warnings macro to files
* Switch setStartWaypoint to setStartInstruciton and update planners
* Fix use of flatten functions and fix trajopt problem generator
* Clang Tidy fixes
* Move Flatten Utilities into tesseract_command_language
* Simplify instruction class signature and utility functions
* Clang format
* Fix motion planner unit tests
* Add command language utils
* Add command_language.h
* Change how start waypoint is defined, now provided by CompositeInstruction
* Add basic print functions to instructions
* Clang-Format
* Update ompl to use new kinematics objects and fix clang-tidy
* Fix error in isJointWaypoint
* Move new planner profiles to tesseract_motion_planners
* Switch to using profiles for plan instructions and composite instructions
* Add tesseract_command_language package
* Contributors: David Merz, Jr, John Wason, Levi Armstrong, Levi-Armstrong, Matthew Powelson
