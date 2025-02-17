^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package tesseract_time_parameterization
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.6.8 (2021-12-01)
------------------

0.6.7 (2021-11-30)
------------------

0.6.6 (2021-11-29)
------------------
* Update CI docker tag and target linking order (`#135 <https://github.com/tesseract-robotics/tesseract_planning/issues/135>`_)
  * Update CI docker tag
  * Update target linking order
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
* Update based on change in trajopt ifopt (`#90 <https://github.com/tesseract-robotics/tesseract_planning/issues/90>`_)
  Co-authored-by: cbw36 <cwolfe1996@gmail.com>
* Add SWIG shared_ptr to trajectory containers
* Add trajectory container class to abstract command lanaguage from time parameterization (`#44 <https://github.com/tesseract-robotics/tesseract_planning/issues/44>`_)
* Add missing console bridge header to iterative spline test
* Make Instruction and Waypoint default constructor private
* Switch type erasure cast methods to return references instead of pointer
* Rename Instruction and Waypoint cast and cast_const to as
* Remove NullWaypoint and NullInstruction types
* Correctly populate start instruction velocities in TOTG
* Fix ProfileDictionary use and profile entries in Python
* Update to use boost targets (`#46 <https://github.com/tesseract-robotics/tesseract_planning/issues/46>`_)
* Switch to using Eigen target
* Fix passing of meta information through TOTG
  Note that it will still be partially lost if it change in the middle of a sub-composite.
* Add sub-composite rescaling to TOTG task generator
* Update to latest tesseract_environment changes
* Fix divide by zero case in time optimal trajectory generation
* Fix unitialized data in time optimal time parameterization and start to fixing float equal comparison
* Add workaround for TOTG failure on duplicate points
* Update cmake_common_scripts to ros_industrial_cmake_boilerplate
* Add time optimal trajectory generation TOTG (`#23 <https://github.com/tesseract-robotics/tesseract_planning/issues/23>`_)
* Update packages package.xml to include buildtool_depend on cmake and exec_depend on catkin
* Update to use initialize_code_coverage() macro and compiler definition
* Extract package name and version from package.xml
* Python package updates for command language
* Add missing colcon.pkg files
* Address console bridge issue `#91 <https://github.com/tesseract-robotics/tesseract_planning/issues/91>`_
* Fix to handle console_bridge target renaming in noetic
* Separate public and private compiler option and add back -mno-avx
* Add individual CI badges and Windows CI build
* Add visibility control to all packages
* Leverage cmake_common_scripts
* Allow ISP scaling factors to be changed on a point by point basis
* Split command_language_utils into multiple files
* Fix Clang Tidy errors
* Rename iterative spline parameterization methods
* Add tesseract_time_parameterization package include iterative spline algorithm
* Contributors: John Wason, Levi Armstrong, Matthew Powelson
