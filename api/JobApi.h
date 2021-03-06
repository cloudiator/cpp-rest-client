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
 * JobApi.h
 *
 * 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_API_JobApi_H_
#define IO_GITHUB_CLOUDIATOR_REST_API_JobApi_H_


#include "../ApiClient.h"

#include "Error.h"
#include "Job.h"
#include "JobNew.h"
#include "Object.h"
#include "Queue.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace api {

using namespace io::github::cloudiator::rest::model;

class  JobApi
{
public:
    JobApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~JobApi();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Creates a new job
    /// </remarks>
    /// <param name="job">Job to be created. </param>
    pplx::task<std::shared_ptr<Job>> addJob(
        std::shared_ptr<JobNew> job
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Deletes the schedule identified by the given id and all corresponding processes and nodes. 
    /// </remarks>
    /// <param name="id">Unique identifier of the resource</param>
    pplx::task<std::shared_ptr<Queue>> deleteSchedule(
        utility::string_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns the job with the given id. 
    /// </remarks>
    /// <param name="id">Unique identifier of the resource</param>
    pplx::task<std::shared_ptr<Job>> findJob(
        utility::string_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns all jobs visible to the user 
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<Job>>> findJobs(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns a json graph representation usable by cyctoscape.js 
    /// </remarks>
    /// <param name="id">Unique identifier of the resource</param>
    pplx::task<std::shared_ptr<Object>> jobGraph(
        utility::string_t id
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_API_JobApi_H_ */

