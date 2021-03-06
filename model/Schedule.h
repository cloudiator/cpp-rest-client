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
 * Schedule.h
 *
 * 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_Schedule_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_Schedule_H_


#include "../ModelBase.h"

#include "ScheduleNew.h"
#include "Process.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// 
/// </summary>
class  Schedule
    : public ModelBase
{
public:
    Schedule();
    virtual ~Schedule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Schedule members

    /// <summary>
    /// The identifier of the job
    /// </summary>
    utility::string_t getJob() const;
    bool jobIsSet() const;
    void unsetJob();
    void setJob(utility::string_t value);
    /// <summary>
    /// If the instantiation should be handled AUTOMATIC or MANUAL
    /// </summary>
    utility::string_t getInstantiation() const;
    bool instantiationIsSet() const;
    void unsetInstantiation();
    void setInstantiation(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Process>>& getProcesses();
    bool processesIsSet() const;
    void unsetProcesses();
    void setProcesses(std::vector<std::shared_ptr<Process>> value);

protected:
    utility::string_t m_Job;
    bool m_JobIsSet;
    utility::string_t m_Instantiation;
    bool m_InstantiationIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    std::vector<std::shared_ptr<Process>> m_Processes;
    bool m_ProcessesIsSet;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_Schedule_H_ */
