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

#include "ifc2x3/IfcRelAssociatesDocument.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDocumentSelect.h"
#include "ifc2x3/IfcRelAssociates.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcRelAssociatesDocument::IfcRelAssociatesDocument(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingDocument = NULL;
}

IfcRelAssociatesDocument::~IfcRelAssociatesDocument() {
}

bool IfcRelAssociatesDocument::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesDocument(this);
}

const std::string &IfcRelAssociatesDocument::type() const {
    return IfcRelAssociatesDocument::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesDocument::getClassType() {
    return IfcRelAssociatesDocument::s_type;
}

const Step::ClassType &IfcRelAssociatesDocument::getType() const {
    return IfcRelAssociatesDocument::s_type;
}

bool IfcRelAssociatesDocument::isOfType(const Step::ClassType &t) const {
    return IfcRelAssociatesDocument::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcDocumentSelect *IfcRelAssociatesDocument::getRelatingDocument() {
    if (Step::BaseObject::inited()) {
        return m_relatingDocument.get();
    }
    else {
        return NULL;
    }
}

const IfcDocumentSelect *IfcRelAssociatesDocument::getRelatingDocument() const {
    IfcRelAssociatesDocument * deConstObject = const_cast< IfcRelAssociatesDocument * > (this);
    return deConstObject->getRelatingDocument();
}

void IfcRelAssociatesDocument::setRelatingDocument(const Step::RefPtr< IfcDocumentSelect > &value) {
    m_relatingDocument = value;
}

void IfcRelAssociatesDocument::unsetRelatingDocument() {
    m_relatingDocument = Step::getUnset(getRelatingDocument());
}

bool IfcRelAssociatesDocument::testRelatingDocument() const {
    return !Step::isUnset(getRelatingDocument());
}

bool IfcRelAssociatesDocument::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingDocument = NULL;
    }
    else {
        m_relatingDocument = new IfcDocumentSelect;
        if (arg[0] == '#') {
            m_relatingDocument->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcRelAssociatesDocument::copy(const IfcRelAssociatesDocument &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    m_relatingDocument = new IfcDocumentSelect;
    m_relatingDocument->copy(*(obj.m_relatingDocument.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesDocument::s_type("IfcRelAssociatesDocument");
