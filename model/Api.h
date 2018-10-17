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
 * Api.h
 *
 * Represents an API used by a cloud 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_Api_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_Api_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// Represents an API used by a cloud 
/// </summary>
class  Api
    : public ModelBase
{
public:
    Api();
    virtual ~Api();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Api members

    /// <summary>
    /// Name of the API provider, maps to a driver
    /// </summary>
    utility::string_t getProviderName() const;
        void setProviderName(utility::string_t value);

protected:
    utility::string_t m_ProviderName;
    };

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_Api_H_ */