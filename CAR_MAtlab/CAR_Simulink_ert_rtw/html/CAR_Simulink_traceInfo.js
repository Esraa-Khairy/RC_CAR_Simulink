function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Chart */
	this.urlHashMap["CAR_Simulink:1"] = "CAR_Simulink.c:20,48,156,280&CAR_Simulink.h:83,84";
	/* <Root>/Constant */
	this.urlHashMap["CAR_Simulink:2"] = "CAR_Simulink.c:45,265&CAR_Simulink.h:78,102&CAR_Simulink_data.c:34";
	/* <S1>:5 */
	this.urlHashMap["CAR_Simulink:1:5"] = "CAR_Simulink.c:60,75,140";
	/* <S1>:3 */
	this.urlHashMap["CAR_Simulink:1:3"] = "CAR_Simulink.c:80,95";
	/* <S1>:7 */
	this.urlHashMap["CAR_Simulink:1:7"] = "CAR_Simulink.c:100,115";
	/* <S1>:4 */
	this.urlHashMap["CAR_Simulink:1:4"] = "CAR_Simulink.c:120,135";
	/* <S1>:23 */
	this.urlHashMap["CAR_Simulink:1:23"] = "CAR_Simulink.c:136";
	/* <S1>:6 */
	this.urlHashMap["CAR_Simulink:1:6"] = "CAR_Simulink.c:56";
	/* <S1>:16 */
	this.urlHashMap["CAR_Simulink:1:16"] = "CAR_Simulink.c:116";
	/* <S1>:15 */
	this.urlHashMap["CAR_Simulink:1:15"] = "CAR_Simulink.c:96";
	/* <S1>:21 */
	this.urlHashMap["CAR_Simulink:1:21"] = "msg=rtwMsg_notTraceable&block=CAR_Simulink:1:21";
	/* <S1>:14 */
	this.urlHashMap["CAR_Simulink:1:14"] = "CAR_Simulink.c:76";
	/* <S1>:22 */
	this.urlHashMap["CAR_Simulink:1:22"] = "msg=rtwMsg_notTraceable&block=CAR_Simulink:1:22";
	/* <S1>:17 */
	this.urlHashMap["CAR_Simulink:1:17"] = "msg=rtwMsg_notTraceable&block=CAR_Simulink:1:17";
	/* <S1>:24 */
	this.urlHashMap["CAR_Simulink:1:24"] = "msg=rtwMsg_notTraceable&block=CAR_Simulink:1:24";
	/* <S1>:18 */
	this.urlHashMap["CAR_Simulink:1:18"] = "msg=rtwMsg_notTraceable&block=CAR_Simulink:1:18";
	/* <S1>:20 */
	this.urlHashMap["CAR_Simulink:1:20"] = "msg=rtwMsg_notTraceable&block=CAR_Simulink:1:20";
	/* <S1>:25 */
	this.urlHashMap["CAR_Simulink:1:25"] = "msg=rtwMsg_notTraceable&block=CAR_Simulink:1:25";
	/* <S1>:19 */
	this.urlHashMap["CAR_Simulink:1:19"] = "msg=rtwMsg_notTraceable&block=CAR_Simulink:1:19";
	/* <S1>:6:1 */
	this.urlHashMap["CAR_Simulink:1:6:1"] = "CAR_Simulink.c:57";
	/* <S1>:5:1 */
	this.urlHashMap["CAR_Simulink:1:5:1"] = "CAR_Simulink.c:61,64,67,70,141,144,147,150";
	/* <S1>:14:1 */
	this.urlHashMap["CAR_Simulink:1:14:1"] = "CAR_Simulink.c:77";
	/* <S1>:3:1 */
	this.urlHashMap["CAR_Simulink:1:3:1"] = "CAR_Simulink.c:81,84,87,90";
	/* <S1>:15:1 */
	this.urlHashMap["CAR_Simulink:1:15:1"] = "CAR_Simulink.c:97";
	/* <S1>:7:1 */
	this.urlHashMap["CAR_Simulink:1:7:1"] = "CAR_Simulink.c:101,104,107,110";
	/* <S1>:16:1 */
	this.urlHashMap["CAR_Simulink:1:16:1"] = "CAR_Simulink.c:117";
	/* <S1>:4:1 */
	this.urlHashMap["CAR_Simulink:1:4:1"] = "CAR_Simulink.c:121,124,127,130";
	/* <S1>:23:1 */
	this.urlHashMap["CAR_Simulink:1:23:1"] = "CAR_Simulink.c:137";
	/* <S2>/Data Type Conversion */
	this.urlHashMap["CAR_Simulink:3:114"] = "CAR_Simulink.c:159";
	/* <S2>/Digital Output */
	this.urlHashMap["CAR_Simulink:3:214"] = "CAR_Simulink.c:158,268&CAR_Simulink.h:90&CAR_Simulink_data.c:22";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["CAR_Simulink:4:114"] = "CAR_Simulink.c:164";
	/* <S3>/Digital Output */
	this.urlHashMap["CAR_Simulink:4:214"] = "CAR_Simulink.c:163,271&CAR_Simulink.h:93&CAR_Simulink_data.c:25";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["CAR_Simulink:5:114"] = "CAR_Simulink.c:169";
	/* <S4>/Digital Output */
	this.urlHashMap["CAR_Simulink:5:214"] = "CAR_Simulink.c:168,274&CAR_Simulink.h:96&CAR_Simulink_data.c:28";
	/* <S5>/Data Type Conversion */
	this.urlHashMap["CAR_Simulink:6:114"] = "CAR_Simulink.c:174";
	/* <S5>/Digital Output */
	this.urlHashMap["CAR_Simulink:6:214"] = "CAR_Simulink.c:173,277&CAR_Simulink.h:99&CAR_Simulink_data.c:31";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "CAR_Simulink"};
	this.sidHashMap["CAR_Simulink"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "CAR_Simulink:1"};
	this.sidHashMap["CAR_Simulink:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "CAR_Simulink:3"};
	this.sidHashMap["CAR_Simulink:3"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "CAR_Simulink:4"};
	this.sidHashMap["CAR_Simulink:4"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "CAR_Simulink:5"};
	this.sidHashMap["CAR_Simulink:5"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "CAR_Simulink:6"};
	this.sidHashMap["CAR_Simulink:6"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "CAR_Simulink:1"};
	this.sidHashMap["CAR_Simulink:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "CAR_Simulink:2"};
	this.sidHashMap["CAR_Simulink:2"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Digital Output"] = {sid: "CAR_Simulink:3"};
	this.sidHashMap["CAR_Simulink:3"] = {rtwname: "<Root>/Digital Output"};
	this.rtwnameHashMap["<Root>/Digital Output1"] = {sid: "CAR_Simulink:4"};
	this.sidHashMap["CAR_Simulink:4"] = {rtwname: "<Root>/Digital Output1"};
	this.rtwnameHashMap["<Root>/Digital Output2"] = {sid: "CAR_Simulink:5"};
	this.sidHashMap["CAR_Simulink:5"] = {rtwname: "<Root>/Digital Output2"};
	this.rtwnameHashMap["<Root>/Digital Output3"] = {sid: "CAR_Simulink:6"};
	this.sidHashMap["CAR_Simulink:6"] = {rtwname: "<Root>/Digital Output3"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "CAR_Simulink:1:5"};
	this.sidHashMap["CAR_Simulink:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "CAR_Simulink:1:3"};
	this.sidHashMap["CAR_Simulink:1:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "CAR_Simulink:1:7"};
	this.sidHashMap["CAR_Simulink:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "CAR_Simulink:1:4"};
	this.sidHashMap["CAR_Simulink:1:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:23"] = {sid: "CAR_Simulink:1:23"};
	this.sidHashMap["CAR_Simulink:1:23"] = {rtwname: "<S1>:23"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "CAR_Simulink:1:6"};
	this.sidHashMap["CAR_Simulink:1:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:16"] = {sid: "CAR_Simulink:1:16"};
	this.sidHashMap["CAR_Simulink:1:16"] = {rtwname: "<S1>:16"};
	this.rtwnameHashMap["<S1>:15"] = {sid: "CAR_Simulink:1:15"};
	this.sidHashMap["CAR_Simulink:1:15"] = {rtwname: "<S1>:15"};
	this.rtwnameHashMap["<S1>:21"] = {sid: "CAR_Simulink:1:21"};
	this.sidHashMap["CAR_Simulink:1:21"] = {rtwname: "<S1>:21"};
	this.rtwnameHashMap["<S1>:14"] = {sid: "CAR_Simulink:1:14"};
	this.sidHashMap["CAR_Simulink:1:14"] = {rtwname: "<S1>:14"};
	this.rtwnameHashMap["<S1>:22"] = {sid: "CAR_Simulink:1:22"};
	this.sidHashMap["CAR_Simulink:1:22"] = {rtwname: "<S1>:22"};
	this.rtwnameHashMap["<S1>:17"] = {sid: "CAR_Simulink:1:17"};
	this.sidHashMap["CAR_Simulink:1:17"] = {rtwname: "<S1>:17"};
	this.rtwnameHashMap["<S1>:24"] = {sid: "CAR_Simulink:1:24"};
	this.sidHashMap["CAR_Simulink:1:24"] = {rtwname: "<S1>:24"};
	this.rtwnameHashMap["<S1>:18"] = {sid: "CAR_Simulink:1:18"};
	this.sidHashMap["CAR_Simulink:1:18"] = {rtwname: "<S1>:18"};
	this.rtwnameHashMap["<S1>:20"] = {sid: "CAR_Simulink:1:20"};
	this.sidHashMap["CAR_Simulink:1:20"] = {rtwname: "<S1>:20"};
	this.rtwnameHashMap["<S1>:25"] = {sid: "CAR_Simulink:1:25"};
	this.sidHashMap["CAR_Simulink:1:25"] = {rtwname: "<S1>:25"};
	this.rtwnameHashMap["<S1>:19"] = {sid: "CAR_Simulink:1:19"};
	this.sidHashMap["CAR_Simulink:1:19"] = {rtwname: "<S1>:19"};
	this.rtwnameHashMap["<S1>:6:1"] = {sid: "CAR_Simulink:1:6:1"};
	this.sidHashMap["CAR_Simulink:1:6:1"] = {rtwname: "<S1>:6:1"};
	this.rtwnameHashMap["<S1>:5:1"] = {sid: "CAR_Simulink:1:5:1"};
	this.sidHashMap["CAR_Simulink:1:5:1"] = {rtwname: "<S1>:5:1"};
	this.rtwnameHashMap["<S1>:14:1"] = {sid: "CAR_Simulink:1:14:1"};
	this.sidHashMap["CAR_Simulink:1:14:1"] = {rtwname: "<S1>:14:1"};
	this.rtwnameHashMap["<S1>:3:1"] = {sid: "CAR_Simulink:1:3:1"};
	this.sidHashMap["CAR_Simulink:1:3:1"] = {rtwname: "<S1>:3:1"};
	this.rtwnameHashMap["<S1>:15:1"] = {sid: "CAR_Simulink:1:15:1"};
	this.sidHashMap["CAR_Simulink:1:15:1"] = {rtwname: "<S1>:15:1"};
	this.rtwnameHashMap["<S1>:7:1"] = {sid: "CAR_Simulink:1:7:1"};
	this.sidHashMap["CAR_Simulink:1:7:1"] = {rtwname: "<S1>:7:1"};
	this.rtwnameHashMap["<S1>:16:1"] = {sid: "CAR_Simulink:1:16:1"};
	this.sidHashMap["CAR_Simulink:1:16:1"] = {rtwname: "<S1>:16:1"};
	this.rtwnameHashMap["<S1>:4:1"] = {sid: "CAR_Simulink:1:4:1"};
	this.sidHashMap["CAR_Simulink:1:4:1"] = {rtwname: "<S1>:4:1"};
	this.rtwnameHashMap["<S1>:23:1"] = {sid: "CAR_Simulink:1:23:1"};
	this.sidHashMap["CAR_Simulink:1:23:1"] = {rtwname: "<S1>:23:1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "CAR_Simulink:3:116"};
	this.sidHashMap["CAR_Simulink:3:116"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion"] = {sid: "CAR_Simulink:3:114"};
	this.sidHashMap["CAR_Simulink:3:114"] = {rtwname: "<S2>/Data Type Conversion"};
	this.rtwnameHashMap["<S2>/Digital Output"] = {sid: "CAR_Simulink:3:214"};
	this.sidHashMap["CAR_Simulink:3:214"] = {rtwname: "<S2>/Digital Output"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "CAR_Simulink:4:116"};
	this.sidHashMap["CAR_Simulink:4:116"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "CAR_Simulink:4:114"};
	this.sidHashMap["CAR_Simulink:4:114"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/Digital Output"] = {sid: "CAR_Simulink:4:214"};
	this.sidHashMap["CAR_Simulink:4:214"] = {rtwname: "<S3>/Digital Output"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "CAR_Simulink:5:116"};
	this.sidHashMap["CAR_Simulink:5:116"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "CAR_Simulink:5:114"};
	this.sidHashMap["CAR_Simulink:5:114"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Digital Output"] = {sid: "CAR_Simulink:5:214"};
	this.sidHashMap["CAR_Simulink:5:214"] = {rtwname: "<S4>/Digital Output"};
	this.rtwnameHashMap["<S5>/In1"] = {sid: "CAR_Simulink:6:116"};
	this.sidHashMap["CAR_Simulink:6:116"] = {rtwname: "<S5>/In1"};
	this.rtwnameHashMap["<S5>/Data Type Conversion"] = {sid: "CAR_Simulink:6:114"};
	this.sidHashMap["CAR_Simulink:6:114"] = {rtwname: "<S5>/Data Type Conversion"};
	this.rtwnameHashMap["<S5>/Digital Output"] = {sid: "CAR_Simulink:6:214"};
	this.sidHashMap["CAR_Simulink:6:214"] = {rtwname: "<S5>/Digital Output"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
