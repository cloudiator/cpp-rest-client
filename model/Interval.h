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
 * Interval.h
 *
 * A time interval consisting of unit and period
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_Interval_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_Interval_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// A time interval consisting of unit and period
/// </summary>
class  Interval
    : public ModelBase
{
public:
    Interval();
    virtual ~Interval();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Interval members

    /// <summary>
    /// The unit of the interval
    /// </summary>
    utility::string_t getUnit() const;
    bool unitIsSet() const;
    void unsetUnit();
    void setUnit(utility::string_t value);
    /// <summary>
    /// The period of the interval
    /// </summary>
    int64_t getPeriod() const;
    bool periodIsSet() const;
    void unsetPeriod();
    void setPeriod(int64_t value);

protected:
    utility::string_t m_Unit;
    bool m_UnitIsSet;
    int64_t m_Period;
    bool m_PeriodIsSet;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_Interval_H_ */
