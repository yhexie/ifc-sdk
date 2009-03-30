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

#ifndef IFC2X3_IFCELLIPSE_H
#define IFC2X3_IFCELLIPSE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcConic.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcEllipse Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcEllipse : public IfcConic {
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
         * Gets the value of the explicit attribute 'SemiAxis1'.
         * 
         */
        virtual IfcPositiveLengthMeasure getSemiAxis1();
        /**
         * (const) Returns the value of the explicit attribute 'SemiAxis1'.
         * 
         * @return the value of the explicit attribute 'SemiAxis1'
         */
        virtual const IfcPositiveLengthMeasure getSemiAxis1() const;
        /**
         * Sets the value of the explicit attribute 'SemiAxis1'.
         * 
         * @param value
         */
        virtual void setSemiAxis1(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'SemiAxis1'.
         * 
         */
        virtual void unsetSemiAxis1();
        /**
         * Test if the attribute 'SemiAxis1' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSemiAxis1() const;
        /**
         * Gets the value of the explicit attribute 'SemiAxis2'.
         * 
         */
        virtual IfcPositiveLengthMeasure getSemiAxis2();
        /**
         * (const) Returns the value of the explicit attribute 'SemiAxis2'.
         * 
         * @return the value of the explicit attribute 'SemiAxis2'
         */
        virtual const IfcPositiveLengthMeasure getSemiAxis2() const;
        /**
         * Sets the value of the explicit attribute 'SemiAxis2'.
         * 
         * @param value
         */
        virtual void setSemiAxis2(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'SemiAxis2'.
         * 
         */
        virtual void unsetSemiAxis2();
        /**
         * Test if the attribute 'SemiAxis2' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSemiAxis2() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcEllipse(Step::Id id, Step::SPFData *args);
        virtual ~IfcEllipse();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcEllipse &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_semiAxis1;
        /**
         */
        Step::Real m_semiAxis2;

    };

}

#endif // IFC2X3_IFCELLIPSE_H
