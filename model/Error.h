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
 * Error.h
 *
 * Basic errorClass 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_Error_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_Error_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// Basic errorClass 
/// </summary>
class  Error
    : public ModelBase
{
public:
    Error();
    virtual ~Error();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Error members

    /// <summary>
    /// 
    /// </summary>
    int32_t getCode() const;
        void setCode(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
        void setMessage(utility::string_t value);

protected:
    int32_t m_Code;
        utility::string_t m_Message;
    };

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_Error_H_ */
