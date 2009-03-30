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

#ifndef IFC2X3_IFCNAMEDUNIT_H
#define IFC2X3_IFCNAMEDUNIT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcDimensionalExponents;

    /**
     * Generated class for the IfcNamedUnit Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcNamedUnit : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Dimensions'.
         * 
         */
        virtual IfcDimensionalExponents *getDimensions();
        /**
         * (const) Returns the value of the explicit attribute 'Dimensions'.
         * 
         * @return the value of the explicit attribute 'Dimensions'
         */
        virtual const IfcDimensionalExponents *getDimensions() const;
        /**
         * Sets the value of the explicit attribute 'Dimensions'.
         * 
         * @param value
         */
        virtual void setDimensions(const Step::RefPtr< IfcDimensionalExponents > &value);
        /**
         * unset the attribute 'Dimensions'.
         * 
         */
        virtual void unsetDimensions();
        /**
         * Test if the attribute 'Dimensions' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDimensions() const;
        /**
         * Gets the value of the explicit attribute 'UnitType'.
         * 
         */
        virtual IfcUnitEnum getUnitType();
        /**
         * (const) Returns the value of the explicit attribute 'UnitType'.
         * 
         * @return the value of the explicit attribute 'UnitType'
         */
        virtual const IfcUnitEnum getUnitType() const;
        /**
         * Sets the value of the explicit attribute 'UnitType'.
         * 
         * @param value
         */
        virtual void setUnitType(IfcUnitEnum value);
        /**
         * unset the attribute 'UnitType'.
         * 
         */
        virtual void unsetUnitType();
        /**
         * Test if the attribute 'UnitType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUnitType() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcNamedUnit(Step::Id id, Step::SPFData *args);
        virtual ~IfcNamedUnit();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcNamedUnit &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDimensionalExponents > m_dimensions;
        /**
         */
        IfcUnitEnum m_unitType;

    };

}

#endif // IFC2X3_IFCNAMEDUNIT_H
