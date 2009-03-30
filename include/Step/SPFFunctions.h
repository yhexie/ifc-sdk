/*//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/
#ifndef Step_SPFFunctions_h
#define Step_SPFFunctions_h

#include "StepDLL.h"

#include "Types.h"

#include <vector>
#include <string>
#include <iostream>

namespace Step {
    /*!
     retrieves elements from a aggregate
     @param arg the string to extract from
     @param str1 the result of the extraction
     @return success
     */
    bool STEP_DLL_DEF getSubParameter(std::string& arg, std::string& str1);
    /*!
     reads a line from a ifstream until the ';' is found, update the line counter and uses the the buffer s to build the resulting string
     @param ifs the input stream
     @param counter the line counter that will be incremented by the number of EOL found
     @param buffer the buffer to store the lines read directly from the ifs
     @param bufferLength the length of the buffer
     @param str the parsed line
     @return success or failure
     */
    bool STEP_DLL_DEF getLine(std::istream& ifs, unsigned int& counter,
            char* buffer, unsigned long bufferLength, std::string& str);

    /*!
     parses a list of strings
     @param buffer the buffer to parse
     @param res the resulting list of strings parsed
     @return success or failure
     */
    bool STEP_DLL_DEF parseList(const char* buffer,
            std::vector<std::string>& res);

    /*!
     returns the id from a string
     @param s the string to parse
     @return the Step::Id (can be unset if $ is found
     */
    Id STEP_DLL_DEF getIdParam(const std::string& s);
    /*!
     constructs a list of Ids from a string
     @param s the string to parse
     @param res the Step::Id (can be unset if $ is found
     @return success or failure
     */
    bool STEP_DLL_DEF getIdListParam(const std::string& s,
                    std::vector<Id>& res);
    /*!
     removes the boundary quotes of a string
     @param s the string to operate on
     @return success or failure
     */
    bool STEP_DLL_DEF removeQuotes(std::string& s);
}
#endif
