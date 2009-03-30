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

#ifndef IFC2X3_IFCTEXTLITERALWITHEXTENT_H
#define IFC2X3_IFCTEXTLITERALWITHEXTENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcTextLiteral.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcPlanarExtent;

    /**
     * Generated class for the IfcTextLiteralWithExtent Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcTextLiteralWithExtent : public IfcTextLiteral {
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
         * Gets the value of the explicit attribute 'Extent'.
         * 
         */
        virtual IfcPlanarExtent *getExtent();
        /**
         * (const) Returns the value of the explicit attribute 'Extent'.
         * 
         * @return the value of the explicit attribute 'Extent'
         */
        virtual const IfcPlanarExtent *getExtent() const;
        /**
         * Sets the value of the explicit attribute 'Extent'.
         * 
         * @param value
         */
        virtual void setExtent(const Step::RefPtr< IfcPlanarExtent > &value);
        /**
         * unset the attribute 'Extent'.
         * 
         */
        virtual void unsetExtent();
        /**
         * Test if the attribute 'Extent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testExtent() const;
        /**
         * Gets the value of the explicit attribute 'BoxAlignment'.
         * 
         */
        virtual IfcBoxAlignment getBoxAlignment();
        /**
         * (const) Returns the value of the explicit attribute 'BoxAlignment'.
         * 
         * @return the value of the explicit attribute 'BoxAlignment'
         */
        virtual const IfcBoxAlignment getBoxAlignment() const;
        /**
         * Sets the value of the explicit attribute 'BoxAlignment'.
         * 
         * @param value
         */
        virtual void setBoxAlignment(const IfcBoxAlignment &value);
        /**
         * unset the attribute 'BoxAlignment'.
         * 
         */
        virtual void unsetBoxAlignment();
        /**
         * Test if the attribute 'BoxAlignment' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBoxAlignment() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextLiteralWithExtent(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextLiteralWithExtent();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextLiteralWithExtent &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPlanarExtent > m_extent;
        /**
         */
        Step::String m_boxAlignment;

    };

}

#endif // IFC2X3_IFCTEXTLITERALWITHEXTENT_H
