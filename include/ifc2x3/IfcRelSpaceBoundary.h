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

#ifndef IFC2X3_IFCRELSPACEBOUNDARY_H
#define IFC2X3_IFCRELSPACEBOUNDARY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcRelConnects.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcConnectionGeometry;
    class IfcElement;
    class IfcSpace;

    /**
     * Generated class for the IfcRelSpaceBoundary Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRelSpaceBoundary : public IfcRelConnects {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'RelatingSpace'.
         * 
         */
        virtual IfcSpace *getRelatingSpace();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingSpace'.
         * 
         * @return the value of the explicit attribute 'RelatingSpace'
         */
        virtual const IfcSpace *getRelatingSpace() const;
        /**
         * Sets the value of the explicit attribute 'RelatingSpace'.
         * 
         * @param value
         */
        virtual void setRelatingSpace(const Step::RefPtr< IfcSpace > &value);
        /**
         * unset the attribute 'RelatingSpace'.
         * 
         */
        virtual void unsetRelatingSpace();
        /**
         * Test if the attribute 'RelatingSpace' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingSpace() const;
        /**
         * Gets the value of the explicit attribute 'RelatedBuildingElement'.
         * 
         */
        virtual IfcElement *getRelatedBuildingElement();
        /**
         * (const) Returns the value of the explicit attribute 'RelatedBuildingElement'.
         * 
         * @return the value of the explicit attribute 'RelatedBuildingElement'
         */
        virtual const IfcElement *getRelatedBuildingElement() const;
        /**
         * Sets the value of the explicit attribute 'RelatedBuildingElement'.
         * 
         * @param value
         */
        virtual void setRelatedBuildingElement(const Step::RefPtr< IfcElement > &value);
        /**
         * unset the attribute 'RelatedBuildingElement'.
         * 
         */
        virtual void unsetRelatedBuildingElement();
        /**
         * Test if the attribute 'RelatedBuildingElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatedBuildingElement() const;
        /**
         * Gets the value of the explicit attribute 'ConnectionGeometry'.
         * 
         */
        virtual IfcConnectionGeometry *getConnectionGeometry();
        /**
         * (const) Returns the value of the explicit attribute 'ConnectionGeometry'.
         * 
         * @return the value of the explicit attribute 'ConnectionGeometry'
         */
        virtual const IfcConnectionGeometry *getConnectionGeometry() const;
        /**
         * Sets the value of the explicit attribute 'ConnectionGeometry'.
         * 
         * @param value
         */
        virtual void setConnectionGeometry(const Step::RefPtr< IfcConnectionGeometry > &value);
        /**
         * unset the attribute 'ConnectionGeometry'.
         * 
         */
        virtual void unsetConnectionGeometry();
        /**
         * Test if the attribute 'ConnectionGeometry' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConnectionGeometry() const;
        /**
         * Gets the value of the explicit attribute 'PhysicalOrVirtualBoundary'.
         * 
         */
        virtual IfcPhysicalOrVirtualEnum getPhysicalOrVirtualBoundary();
        /**
         * (const) Returns the value of the explicit attribute 'PhysicalOrVirtualBoundary'.
         * 
         * @return the value of the explicit attribute 'PhysicalOrVirtualBoundary'
         */
        virtual const IfcPhysicalOrVirtualEnum getPhysicalOrVirtualBoundary() const;
        /**
         * Sets the value of the explicit attribute 'PhysicalOrVirtualBoundary'.
         * 
         * @param value
         */
        virtual void setPhysicalOrVirtualBoundary(IfcPhysicalOrVirtualEnum value);
        /**
         * unset the attribute 'PhysicalOrVirtualBoundary'.
         * 
         */
        virtual void unsetPhysicalOrVirtualBoundary();
        /**
         * Test if the attribute 'PhysicalOrVirtualBoundary' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPhysicalOrVirtualBoundary() const;
        /**
         * Gets the value of the explicit attribute 'InternalOrExternalBoundary'.
         * 
         */
        virtual IfcInternalOrExternalEnum getInternalOrExternalBoundary();
        /**
         * (const) Returns the value of the explicit attribute 'InternalOrExternalBoundary'.
         * 
         * @return the value of the explicit attribute 'InternalOrExternalBoundary'
         */
        virtual const IfcInternalOrExternalEnum getInternalOrExternalBoundary() const;
        /**
         * Sets the value of the explicit attribute 'InternalOrExternalBoundary'.
         * 
         * @param value
         */
        virtual void setInternalOrExternalBoundary(IfcInternalOrExternalEnum value);
        /**
         * unset the attribute 'InternalOrExternalBoundary'.
         * 
         */
        virtual void unsetInternalOrExternalBoundary();
        /**
         * Test if the attribute 'InternalOrExternalBoundary' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testInternalOrExternalBoundary() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelSpaceBoundary(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelSpaceBoundary();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelSpaceBoundary &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSpace > m_relatingSpace;
        /**
         */
        Step::RefPtr< IfcElement > m_relatedBuildingElement;
        /**
         */
        Step::RefPtr< IfcConnectionGeometry > m_connectionGeometry;
        /**
         */
        IfcPhysicalOrVirtualEnum m_physicalOrVirtualBoundary;
        /**
         */
        IfcInternalOrExternalEnum m_internalOrExternalBoundary;

    };

}

#endif // IFC2X3_IFCRELSPACEBOUNDARY_H
