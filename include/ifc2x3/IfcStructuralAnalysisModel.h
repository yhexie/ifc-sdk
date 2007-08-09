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

#ifndef IFC2X3_IFCSTRUCTURALANALYSISMODEL_H
#define IFC2X3_IFCSTRUCTURALANALYSISMODEL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcSystem.h>
#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcAxis2Placement3D;
  class IfcStructuralAnalysisModel_Factory;
  class IfcStructuralLoadGroup;
  class IfcStructuralResultGroup;

  /**
   */
  class IFC2X3_DLL_DEF IfcStructuralAnalysisModel : public IfcSystem {
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
     * (non-const) Returns the value of the explicit attribute 'PredefinedType'.
     * 
     * @return the value of the explicit attribute 'PredefinedType'
     */
    IfcAnalysisModelTypeEnum getPredefinedType();
    /**
     * Sets the value of the explicit attribute 'PredefinedType'.
     * 
     * @param value
     */
    void setPredefinedType(IfcAnalysisModelTypeEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'OrientationOf2DPlane'.
     * 
     * @return the value of the explicit attribute 'OrientationOf2DPlane'
     */
    IfcAxis2Placement3D *getOrientationOf2DPlane();
    /**
     * Sets the value of the explicit attribute 'OrientationOf2DPlane'.
     * 
     * @param value
     */
    void setOrientationOf2DPlane(const Step::RefPtr< IfcAxis2Placement3D > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LoadedBy'.
     * 
     * @return the value of the explicit attribute 'LoadedBy'
     */
    Step::StepSet< Step::RefPtr< IfcStructuralLoadGroup > > &getLoadedBy();
    /**
     * Sets the value of the explicit attribute 'LoadedBy'.
     * 
     * @param value
     */
    void setLoadedBy(const Step::StepSet< Step::RefPtr< IfcStructuralLoadGroup > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HasResults'.
     * 
     * @return the value of the explicit attribute 'HasResults'
     */
    Step::StepSet< Step::RefPtr< IfcStructuralResultGroup > > &getHasResults();
    /**
     * Sets the value of the explicit attribute 'HasResults'.
     * 
     * @param value
     */
    void setHasResults(const Step::StepSet< Step::RefPtr< IfcStructuralResultGroup > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcStructuralAnalysisModel_Factory;

  protected:
    /**
     * @param args
     */
    IfcStructuralAnalysisModel(Step::SPFData *args);
    virtual ~IfcStructuralAnalysisModel();

  private:
    static Step::ClassType s_type;
    IfcAnalysisModelTypeEnum m_predefinedType;
    Step::RefPtr< IfcAxis2Placement3D > m_orientationOf2DPlane;
    Step::StepSet< Step::RefPtr< IfcStructuralLoadGroup > > m_loadedBy;
    Step::StepSet< Step::RefPtr< IfcStructuralResultGroup > > m_hasResults;
    /**
     * @param c
     */
    IfcStructuralAnalysisModel(const IfcStructuralAnalysisModel &c);

  };

  class IfcStructuralAnalysisModel;

  /**
   */
  class IFC2X3_DLL_DEF IfcStructuralAnalysisModel_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcStructuralAnalysisModel_Factory();
    virtual ~IfcStructuralAnalysisModel_Factory();
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
    IfcStructuralAnalysisModel *get(Step::StepId id);
    /**
     */
    IfcStructuralAnalysisModel *generate();
    /**
     * @param id
     */
    IfcStructuralAnalysisModel *find(Step::StepId id);

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

#endif // IFC2X3_IFCSTRUCTURALANALYSISMODEL_H
