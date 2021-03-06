/**
 * Cloudiator REST Api
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 0.2.0
 * Contact: daniel.baur@uni-ulm.de
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * CloudConfiguration.h
 *
 * Repesents the configuration of a cloud. 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_CloudConfiguration_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_CloudConfiguration_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Map.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// Repesents the configuration of a cloud. 
/// </summary>
class  CloudConfiguration
    : public ModelBase
{
public:
    CloudConfiguration();
    virtual ~CloudConfiguration();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CloudConfiguration members

    /// <summary>
    /// A prefix all Cloudiator managed entities will belong to.
    /// </summary>
    utility::string_t getNodeGroup() const;
    bool nodeGroupIsSet() const;
    void unsetNodeGroup();
    void setNodeGroup(utility::string_t value);
    /// <summary>
    /// Configuration as key-value map.
    /// </summary>
    std::shared_ptr<Map> getProperties() const;
    bool propertiesIsSet() const;
    void unsetProperties();
    void setProperties(std::shared_ptr<Map> value);

protected:
    utility::string_t m_NodeGroup;
    bool m_NodeGroupIsSet;
    std::shared_ptr<Map> m_Properties;
    bool m_PropertiesIsSet;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_CloudConfiguration_H_ */
