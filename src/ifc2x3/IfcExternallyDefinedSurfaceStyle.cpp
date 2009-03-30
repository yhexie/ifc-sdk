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

#include "ifc2x3/IfcExternallyDefinedSurfaceStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcExternalReference.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcExternallyDefinedSurfaceStyle::IfcExternallyDefinedSurfaceStyle(Step::Id id, Step::SPFData *args) : IfcExternalReference(id, args) {
}

IfcExternallyDefinedSurfaceStyle::~IfcExternallyDefinedSurfaceStyle() {
}

bool IfcExternallyDefinedSurfaceStyle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcExternallyDefinedSurfaceStyle(this);
}

const std::string &IfcExternallyDefinedSurfaceStyle::type() const {
    return IfcExternallyDefinedSurfaceStyle::s_type.getName();
}

const Step::ClassType &IfcExternallyDefinedSurfaceStyle::getClassType() {
    return IfcExternallyDefinedSurfaceStyle::s_type;
}

const Step::ClassType &IfcExternallyDefinedSurfaceStyle::getType() const {
    return IfcExternallyDefinedSurfaceStyle::s_type;
}

bool IfcExternallyDefinedSurfaceStyle::isOfType(const Step::ClassType &t) const {
    return IfcExternallyDefinedSurfaceStyle::s_type == t ? true : IfcExternalReference::isOfType(t);
}

bool IfcExternallyDefinedSurfaceStyle::init() {
    bool status = IfcExternalReference::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcExternallyDefinedSurfaceStyle::copy(const IfcExternallyDefinedSurfaceStyle &obj, const CopyOp &copyop) {
    IfcExternalReference::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcExternallyDefinedSurfaceStyle::s_type("IfcExternallyDefinedSurfaceStyle");
