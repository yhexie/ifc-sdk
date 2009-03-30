/*
//////////////////////////////////
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

#include "ifc2x3/IfcBuildingElementType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcBuildingElementType::IfcBuildingElementType(Step::Id id, Step::SPFData *args) : IfcElementType(id, args) {
}

IfcBuildingElementType::~IfcBuildingElementType() {
}

bool IfcBuildingElementType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBuildingElementType(this);
}

const std::string &IfcBuildingElementType::type() const {
    return IfcBuildingElementType::s_type.getName();
}

const Step::ClassType &IfcBuildingElementType::getClassType() {
    return IfcBuildingElementType::s_type;
}

const Step::ClassType &IfcBuildingElementType::getType() const {
    return IfcBuildingElementType::s_type;
}

bool IfcBuildingElementType::isOfType(const Step::ClassType &t) const {
    return IfcBuildingElementType::s_type == t ? true : IfcElementType::isOfType(t);
}

bool IfcBuildingElementType::init() {
    bool status = IfcElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBuildingElementType::copy(const IfcBuildingElementType &obj, const CopyOp &copyop) {
    IfcElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuildingElementType::s_type("IfcBuildingElementType");
