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

#ifndef IFC2X3_IFCROOT_H
#define IFC2X3_IFCROOT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcOwnerHistory;

    /**
     * Generated class for the IfcRoot Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRoot : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'GlobalId'.
         * 
         */
        virtual IfcGloballyUniqueId getGlobalId();
        /**
         * (const) Returns the value of the explicit attribute 'GlobalId'.
         * 
         * @return the value of the explicit attribute 'GlobalId'
         */
        virtual const IfcGloballyUniqueId getGlobalId() const;
        /**
         * Sets the value of the explicit attribute 'GlobalId'.
         * 
         * @param value
         */
        virtual void setGlobalId(const IfcGloballyUniqueId &value);
        /**
         * unset the attribute 'GlobalId'.
         * 
         */
        virtual void unsetGlobalId();
        /**
         * Test if the attribute 'GlobalId' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testGlobalId() const;
        /**
         * Gets the value of the explicit attribute 'OwnerHistory'.
         * 
         */
        virtual IfcOwnerHistory *getOwnerHistory();
        /**
         * (const) Returns the value of the explicit attribute 'OwnerHistory'.
         * 
         * @return the value of the explicit attribute 'OwnerHistory'
         */
        virtual const IfcOwnerHistory *getOwnerHistory() const;
        /**
         * Sets the value of the explicit attribute 'OwnerHistory'.
         * 
         * @param value
         */
        virtual void setOwnerHistory(const Step::RefPtr< IfcOwnerHistory > &value);
        /**
         * unset the attribute 'OwnerHistory'.
         * 
         */
        virtual void unsetOwnerHistory();
        /**
         * Test if the attribute 'OwnerHistory' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOwnerHistory() const;
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * unset the attribute 'Description'.
         * 
         */
        virtual void unsetDescription();
        /**
         * Test if the attribute 'Description' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDescription() const;
        friend class Inverted_IfcRelAssociates_RelatedObjects_type;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRoot(Step::Id id, Step::SPFData *args);
        virtual ~IfcRoot();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRoot &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_globalId;
        /**
         */
        Step::RefPtr< IfcOwnerHistory > m_ownerHistory;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;

    };

}

#endif // IFC2X3_IFCROOT_H
