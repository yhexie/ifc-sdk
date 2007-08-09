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

#ifndef IFC2X3_IFCPROFILEDEF_H
#define IFC2X3_IFCPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  /**
   */
  class IFC2X3_DLL_DEF IfcProfileDef : public Step::BaseObject {
  public:
    /**
     * Accepts a read/write DatatypeVisitor.
     * 
     * @param v the read/write DatatypeVisitor to accept
     */
    virtual bool acceptVisitor(Step::BaseVisitor *v);
    /**
     */
    virtual const char *type();
    /**
     */
    static Step::ClassType getClassType();
    /**
     */
    virtual Step::ClassType getType() const;
    /**
     * @param t
     */
    virtual bool isOfType(Step::ClassType t);
    /**
     * (non-const) Returns the value of the explicit attribute 'ProfileType'.
     * 
     * @return the value of the explicit attribute 'ProfileType'
     */
    IfcProfileTypeEnum getProfileType();
    /**
     * Sets the value of the explicit attribute 'ProfileType'.
     * 
     * @param value
     */
    void setProfileType(IfcProfileTypeEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ProfileName'.
     * 
     * @return the value of the explicit attribute 'ProfileName'
     */
    IfcLabel getProfileName();
    /**
     * Sets the value of the explicit attribute 'ProfileName'.
     * 
     * @param value
     */
    void setProfileName(const IfcLabel &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();

  protected:
    /**
     * @param args
     */
    IfcProfileDef(Step::SPFData *args);
    virtual ~IfcProfileDef();

  private:
    static Step::ClassType s_type;
    IfcProfileTypeEnum m_profileType;
    std::string m_profileName;
    /**
     * @param c
     */
    IfcProfileDef(const IfcProfileDef &c);

  };

}

#endif // IFC2X3_IFCPROFILEDEF_H
