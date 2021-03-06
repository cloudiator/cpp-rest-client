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
 * Cloud.h
 *
 * Representation of a cloud used by Cloudiator 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_Cloud_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_Cloud_H_


#include "../ModelBase.h"

#include "NewCloud.h"
#include "CloudCredential.h"
#include "CloudType.h"
#include <cpprest/details/basic_types.h>
#include "CloudConfiguration.h"
#include "Api.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// Representation of a cloud used by Cloudiator 
/// </summary>
class  Cloud
    : public ModelBase
{
public:
    Cloud();
    virtual ~Cloud();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Cloud members

    /// <summary>
    /// URI where the api of this cloud provider can be accessed.
    /// </summary>
    utility::string_t getEndpoint() const;
    bool endpointIsSet() const;
    void unsetEndpoint();
    void setEndpoint(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CloudType> getCloudType() const;
        void setCloudType(std::shared_ptr<CloudType> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Api> getApi() const;
        void setApi(std::shared_ptr<Api> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CloudCredential> getCredential() const;
        void setCredential(std::shared_ptr<CloudCredential> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CloudConfiguration> getCloudConfiguration() const;
    bool cloudConfigurationIsSet() const;
    void unsetCloudConfiguration();
    void setCloudConfiguration(std::shared_ptr<CloudConfiguration> value);
    /// <summary>
    /// Unique identifier for the cloud
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// State of the cloud
    /// </summary>
    utility::string_t getState() const;
    bool stateIsSet() const;
    void unsetState();
    void setState(utility::string_t value);
    /// <summary>
    /// Diagnostic information for the cloud
    /// </summary>
    utility::string_t getDiagnostic() const;
    bool diagnosticIsSet() const;
    void unsetDiagnostic();
    void setDiagnostic(utility::string_t value);

protected:
    utility::string_t m_Endpoint;
    bool m_EndpointIsSet;
    std::shared_ptr<CloudType> m_CloudType;
        std::shared_ptr<Api> m_Api;
        std::shared_ptr<CloudCredential> m_Credential;
        std::shared_ptr<CloudConfiguration> m_CloudConfiguration;
    bool m_CloudConfigurationIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_State;
    bool m_StateIsSet;
    utility::string_t m_Diagnostic;
    bool m_DiagnosticIsSet;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_Cloud_H_ */
