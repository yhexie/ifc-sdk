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

#ifndef IFC2X3_IFCTRIMMEDCURVE_H
#define IFC2X3_IFCTRIMMEDCURVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcBoundedCurve.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcCurve;
  class IfcTrimmedCurve_Factory;
  class IfcTrimmingSelect;

  /**
   */
  class IFC2X3_DLL_DEF IfcTrimmedCurve : public Step::InstantiatableEntity, public IfcBoundedCurve {
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
     * (non-const) Returns the value of the explicit attribute 'BasisCurve'.
     * 
     * @return the value of the explicit attribute 'BasisCurve'
     */
    IfcCurve *getBasisCurve();
    /**
     * Sets the value of the explicit attribute 'BasisCurve'.
     * 
     * @param value
     */
    void setBasisCurve(const Step::RefPtr< IfcCurve > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Trim1'.
     * 
     * @return the value of the explicit attribute 'Trim1'
     */
    Step::StepSet< Step::RefPtr< IfcTrimmingSelect > > &getTrim1();
    /**
     * Sets the value of the explicit attribute 'Trim1'.
     * 
     * @param value
     */
    void setTrim1(const Step::StepSet< Step::RefPtr< IfcTrimmingSelect > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Trim2'.
     * 
     * @return the value of the explicit attribute 'Trim2'
     */
    Step::StepSet< Step::RefPtr< IfcTrimmingSelect > > &getTrim2();
    /**
     * Sets the value of the explicit attribute 'Trim2'.
     * 
     * @param value
     */
    void setTrim2(const Step::StepSet< Step::RefPtr< IfcTrimmingSelect > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SenseAgreement'.
     * 
     * @return the value of the explicit attribute 'SenseAgreement'
     */
    Bool getSenseAgreement();
    /**
     * Sets the value of the explicit attribute 'SenseAgreement'.
     * 
     * @param value
     */
    void setSenseAgreement(Bool value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MasterRepresentation'.
     * 
     * @return the value of the explicit attribute 'MasterRepresentation'
     */
    IfcTrimmingPreference getMasterRepresentation();
    /**
     * Sets the value of the explicit attribute 'MasterRepresentation'.
     * 
     * @param value
     */
    void setMasterRepresentation(IfcTrimmingPreference value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcTrimmedCurve_Factory;

  protected:
    /**
     * @param args
     */
    IfcTrimmedCurve(Step::SPFData *args);
    virtual ~IfcTrimmedCurve();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcCurve > m_basisCurve;
    Step::StepSet< Step::RefPtr< IfcTrimmingSelect > > m_trim1;
    Step::StepSet< Step::RefPtr< IfcTrimmingSelect > > m_trim2;
    Bool m_senseAgreement;
    IfcTrimmingPreference m_masterRepresentation;
    /**
     * @param c
     */
    IfcTrimmedCurve(const IfcTrimmedCurve &c);

  };

  class IfcTrimmedCurve;

  /**
   */
  class IFC2X3_DLL_DEF IfcTrimmedCurve_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcTrimmedCurve_Factory();
    virtual ~IfcTrimmedCurve_Factory();
    /**
     * @param b
     */
    void clear(bool b);
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator begin();
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator end();
    /**
     * @param id
     */
    IfcTrimmedCurve *get(Step::StepId id);
    /**
     */
    IfcTrimmedCurve *generate();
    /**
     * @param id
     */
    IfcTrimmedCurve *find(Step::StepId id);

  protected:
    /**
     * @param id
     */
    virtual Step::BaseObject *create(Step::StepId id);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(std::map<Step::StepId, Step::BaseObject*>::iterator it);

  };

}

#endif // IFC2X3_IFCTRIMMEDCURVE_H
