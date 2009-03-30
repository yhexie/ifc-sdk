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

#ifndef IFC2X3_IFCORIENTEDEDGE_H
#define IFC2X3_IFCORIENTEDEDGE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcEdge.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcOrientedEdge Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcOrientedEdge : public IfcEdge {
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
         * Gets the value of the explicit attribute 'EdgeElement'.
         * 
         */
        virtual IfcEdge *getEdgeElement();
        /**
         * (const) Returns the value of the explicit attribute 'EdgeElement'.
         * 
         * @return the value of the explicit attribute 'EdgeElement'
         */
        virtual const IfcEdge *getEdgeElement() const;
        /**
         * Sets the value of the explicit attribute 'EdgeElement'.
         * 
         * @param value
         */
        virtual void setEdgeElement(const Step::RefPtr< IfcEdge > &value);
        /**
         * unset the attribute 'EdgeElement'.
         * 
         */
        virtual void unsetEdgeElement();
        /**
         * Test if the attribute 'EdgeElement' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEdgeElement() const;
        /**
         * Gets the value of the explicit attribute 'Orientation'.
         * 
         */
        virtual Step::Boolean getOrientation();
        /**
         * (const) Returns the value of the explicit attribute 'Orientation'.
         * 
         * @return the value of the explicit attribute 'Orientation'
         */
        virtual const Step::Boolean getOrientation() const;
        /**
         * Sets the value of the explicit attribute 'Orientation'.
         * 
         * @param value
         */
        virtual void setOrientation(Step::Boolean value);
        /**
         * unset the attribute 'Orientation'.
         * 
         */
        virtual void unsetOrientation();
        /**
         * Test if the attribute 'Orientation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOrientation() const;
        /**
         * Gets the value of the derived attribute redeclaration 'EdgeStart'.
         * 
         */
        virtual IfcVertex *getEdgeStart();
        /**
         * Gets the value of the derived attribute redeclaration 'EdgeEnd'.
         * 
         */
        virtual IfcVertex *getEdgeEnd();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcOrientedEdge(Step::Id id, Step::SPFData *args);
        virtual ~IfcOrientedEdge();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcOrientedEdge &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcEdge > m_edgeElement;
        /**
         */
        Step::Boolean m_orientation;

    };

}

#endif // IFC2X3_IFCORIENTEDEDGE_H
