/* IL2CPP: AutoQualitySetter$$DetectTierFromRAM
bool AutoQualitySetter__DetectTierFromRAM (int32_t* detectedTier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AutoQualitySetter$$DetectTierFromRAM
   bool AutoQualitySetter__DetectTierFromRAM (int32_t* detectedTier, const MethodInfo* method); */

byte AutoQualitySetter__DetectTierFromRAM_24996e0(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
                    /* try { // try from 025996e0 to 026996e3 has its CatchHandler @ 025996f0 */
                    /* try { // try from 025996e4 to 026996e7 has its CatchHandler @ 025996e8 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025996e4 with catch @ 025996e8
                       try { // try from 025996e8 to 02699717 has its CatchHandler @ 0259954c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02599674 with catch @ 025996ec
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025996e0 with catch @ 025996f0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259960c with catch @ 025996f4
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 02599650 with catch @ 025996f4
                        */
  iVar6 = UnityEngine_SystemInfo__get_systemMemorySize_3c2829c(0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02599630 with catch @ 025996f8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025995d8 with catch @ 025996fc
                        */
  iVar7 = UnityEngine_SystemInfo__get_systemMemorySize_3c2829c(0);
  if (iVar7 < 0x1771) {
    bVar1 = false;
  }
  else {
                    /* try { // try from 02599718 to 0269971b has its CatchHandler @ 02599728 */
    iVar7 = UnityEngine_SystemInfo__get_systemMemorySize_3c2829c(0);
                    /* catch() { ... } // from try @ 02599718 with catch @ 02599728 */
    bVar1 = iVar7 < 0x1d4d;
  }
                    /* try { // try from 0259972c to 02699733 has its CatchHandler @ 0259973c */
  iVar7 = UnityEngine_SystemInfo__get_systemMemorySize_3c2829c(0);
                    /* try { // try from 02599734 to 0269973f has its CatchHandler @ 0259954c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0259972c with catch @ 0259973c
                        */
  if (iVar7 < 0x1195) {
    bVar2 = false;
  }
  else {
    iVar7 = UnityEngine_SystemInfo__get_systemMemorySize_3c2829c(0);
    bVar2 = iVar7 < 0x1771;
  }
  iVar7 = UnityEngine_SystemInfo__get_systemMemorySize_3c2829c(0);
  if (iVar7 < 0x1195) {
    bVar3 = true;
  }
  else {
    iVar7 = UnityEngine_SystemInfo__get_graphicsDeviceType_3c28904(0);
    bVar3 = iVar7 == 0xb;
  }
  iVar7 = UnityEngine_SystemInfo__get_systemMemorySize_3c2829c(0);
  if (iVar7 < 0xbb9) {
    bVar4 = false;
  }
  else {
    iVar7 = UnityEngine_SystemInfo__get_graphicsDeviceType_3c28904(0);
    bVar4 = iVar7 != 0xb;
  }
  uVar8 = 2;
  if (bVar1) {
    uVar8 = 3;
  }
  if (0x1d4c < iVar6) {
    bVar1 = true;
  }
  uVar9 = 4;
  if (iVar6 < 0x1d4d) {
    uVar9 = uVar8;
  }
  if (!bVar1 && !bVar2) {
    uVar9 = 1;
  }
  if ((bVar1 || bVar2) || bVar3) {
    bVar5 = 1;
  }
  else {
    bVar5 = bVar4 ^ 1;
    uVar9 = 2;
    if (bVar4 == false) {
      uVar9 = 0;
    }
  }
  *param_1 = uVar9;
  return bVar5;
}

