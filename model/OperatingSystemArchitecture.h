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
 * OperatingSystemArchitecture.h
 *
 * Type of OS Architecture
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_OperatingSystemArchitecture_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_OperatingSystemArchitecture_H_


#include "../ModelBase.h"


namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// Type of OS Architecture
/// </summary>
class  OperatingSystemArchitecture
    : public ModelBase
{
public:
    OperatingSystemArchitecture();
    virtual ~OperatingSystemArchitecture();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OperatingSystemArchitecture members


protected:
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_OperatingSystemArchitecture_H_ */
