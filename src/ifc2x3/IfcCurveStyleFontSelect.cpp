/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include <MemoryLeak.h>
#include <ifc2x3/IfcCurveStyleFontSelect.h>

#include <Step/BaseObject.h>
#include <ifc2x3/IfcCurveStyleFont.h>
#include <ifc2x3/IfcPreDefinedCurveFont.h>
#include <ifc2x3/Visitor.h>

using namespace ifc2x3;

IfcCurveStyleFontSelect::IfcCurveStyleFontSelect() : Step::BaseObject(0) {
  m_type = UNSET;
}

IfcCurveStyleFontSelect::IfcCurveStyleFontSelect(Step::SPFData *args) : Step::BaseObject(args) {
  m_type = UNSET;
}


IfcCurveStyleFontSelect::~IfcCurveStyleFontSelect() {
  deleteUnion();
}

bool IfcCurveStyleFontSelect::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCurveStyleFontSelect(this);
}

bool IfcCurveStyleFontSelect::init() {
  return false;
}

const char *IfcCurveStyleFontSelect::type() {
  return "IfcCurveStyleFontSelect";
}

Step::ClassType IfcCurveStyleFontSelect::getClassType() {
  return IfcCurveStyleFontSelect::s_type;
}

Step::ClassType IfcCurveStyleFontSelect::getType() const {
  return IfcCurveStyleFontSelect::s_type;
}

bool IfcCurveStyleFontSelect::isOfType(Step::ClassType t) {
  return IfcCurveStyleFontSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

char *IfcCurveStyleFontSelect::currentTypeName() {
  switch(m_type) {
  case IFCPREDEFINEDCURVEFONT:
    return "IfcPreDefinedCurveFont";
    break;
  case IFCCURVESTYLEFONT:
    return "IfcCurveStyleFont";
    break;
  default:
    return "UNSET";
  }
}

IfcCurveStyleFontSelect::IfcCurveStyleFontSelect_select IfcCurveStyleFontSelect::currentType() {
  return m_type;
}

void IfcCurveStyleFontSelect::deleteUnion() {
  switch(m_type) {
  case IFCPREDEFINEDCURVEFONT:
    m_IfcCurveStyleFontSelect_union.m_IfcPreDefinedCurveFont->unref();
    break;
  case IFCCURVESTYLEFONT:
    m_IfcCurveStyleFontSelect_union.m_IfcCurveStyleFont->unref();
    break;
    }
  m_type = UNSET;
}

IfcPreDefinedCurveFont *IfcCurveStyleFontSelect::getIfcPreDefinedCurveFont() {
  return m_IfcCurveStyleFontSelect_union.m_IfcPreDefinedCurveFont;
}

void IfcCurveStyleFontSelect::setIfcPreDefinedCurveFont(IfcPreDefinedCurveFont *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcCurveStyleFontSelect_union.m_IfcPreDefinedCurveFont = value;
  if (value) {
    value->ref();
    m_type = IFCPREDEFINEDCURVEFONT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCPREDEFINEDCURVEFONT;
}

IfcCurveStyleFont *IfcCurveStyleFontSelect::getIfcCurveStyleFont() {
  return m_IfcCurveStyleFontSelect_union.m_IfcCurveStyleFont;
}

void IfcCurveStyleFontSelect::setIfcCurveStyleFont(IfcCurveStyleFont *value) {
  deleteUnion();
  if (m_type != UNSET) {
    deleteUnion();
  }
  m_IfcCurveStyleFontSelect_union.m_IfcCurveStyleFont = value;
  if (value) {
    value->ref();
    m_type = IFCCURVESTYLEFONT;
  }
  else {
    m_type = UNSET;
  }
  m_type = IFCCURVESTYLEFONT;
}

void IfcCurveStyleFontSelect::set(Step::BaseObject *v) {
  if (v->isOfType(IfcPreDefinedCurveFont::getClassType())) {
    setIfcPreDefinedCurveFont(static_cast< IfcPreDefinedCurveFont* > (v));
  }
  else if (v->isOfType(IfcCurveStyleFont::getClassType())) {
    setIfcCurveStyleFont(static_cast< IfcCurveStyleFont* > (v));
  }
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveStyleFontSelect::s_type = new Step::ClassType_class("IfcCurveStyleFontSelect");
