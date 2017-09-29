#include "esm_sapDef.h"
#include "bstrlib.h"
#define ESM_DATA_IND(mSGpTR) (mSGpTR)->ittiMsg.esm_sap_test
typedef struct esm_sap_test_s {
	  esm_primitive_t primitive;  /* ESM-SAP primitive to process     */
	  bool is_standalone;      /* Indicates whether the ESM message handled
				    * within this primitive has to be sent/received
			         *                  * standalone or together within an EMM related
				   * message              */
	   struct emm_context_s  *ctx;       /* UE MM context                   */
	   unsigned int        ue_id;      /* Local UE identifier             */
	   esm_sap_error_t     err;       /* ESM-SAP error code               */
	   const_bstring       recv;      /* Encoded ESM message received     */
	   bstring             send;      /* Encoded ESM message to be sent   */
	   esm_sap_data_t      data;      /* ESM message data parameters      */
} esm_sap_test_t;
