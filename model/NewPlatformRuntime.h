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
 * NewPlatformRuntime.h
 *
 * Represents a runtime for a Platform component, e.g. Java, PHP, Tomcat
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_NewPlatformRuntime_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_NewPlatformRuntime_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// Represents a runtime for a Platform component, e.g. Java, PHP, Tomcat
/// </summary>
class  NewPlatformRuntime
    : public ModelBase
{
public:
    NewPlatformRuntime();
    virtual ~NewPlatformRuntime();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NewPlatformRuntime members

    /// <summary>
    /// human readable name
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// the specific runtime language
    /// </summary>
    utility::string_t getLanguage() const;
        void setLanguage(utility::string_t value);
    /// <summary>
    /// language version number
    /// </summary>
    double getLanguageVersion() const;
    bool languageVersionIsSet() const;
    void unsetLanguageVersion();
    void setLanguageVersion(double value);
    /// <summary>
    /// specifies the runtime type
    /// </summary>
    utility::string_t getRuntimeType() const;
        void setRuntimeType(utility::string_t value);
    /// <summary>
    /// the version of the specified type
    /// </summary>
    double getVersion() const;
        void setVersion(double value);

protected:
    utility::string_t m_Name;
        utility::string_t m_Language;
        double m_LanguageVersion;
    bool m_LanguageVersionIsSet;
    utility::string_t m_RuntimeType;
        double m_Version;
    };

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_NewPlatformRuntime_H_ */
