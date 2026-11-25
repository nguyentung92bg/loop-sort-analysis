/* IL2CPP: RisingMotesEffect$$Awake
void RisingMotesEffect__Awake (RisingMotesEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RisingMotesEffect$$Awake
   void RisingMotesEffect__Awake (RisingMotesEffect_o* __this, const MethodInfo* method); */

void RisingMotesEffect__Awake_25729e8(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000004f4c1e8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc1b0);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    FUN_021f03f8(PTR_DAT_049be640);
                    /* try { // try from 02672a34 to 02772a3b has its CatchHandler @ 02672b54 */
    FUN_021f03f8(PTR_DAT_049bc298);
    bRam0000000004f4c1e8 = 1;
  }
  puVar2 = PTR_DAT_049cc1b0;
                    /* try { // try from 02672a4c to 02772a53 has its CatchHandler @ 02672b38 */
  plVar3 = (long *)UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (plVar3 == (long *)0x0) {
                    /* try { // try from 02672a8c to 02772a97 has its CatchHandler @ 02672b4c */
    plVar3 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
                    /* try { // try from 02672a58 to 02772a67 has its CatchHandler @ 02672b34 */
    lVar5 = *(long *)PTR_DAT_049bc0c8;
    plVar1 = plVar3;
    if (*plVar3 != lVar5) {
      plVar1 = (long *)0x0;
    }
                    /* try { // try from 02672a74 to 02772a83 has its CatchHandler @ 02672b48 */
    *(long **)(param_1 + 0x40) = plVar1;
    if (*plVar3 != lVar5) {
      plVar3 = (long *)0x0;
    }
  }
  thunk_FUN_021f190c(param_1 + 0x40,plVar3);
                    /* try { // try from 02672aa0 to 02772aab has its CatchHandler @ 02672b50 */
  lVar5 = UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType__25c2258
                    (param_1,1,*(undefined8 *)puVar2);
  plVar3 = (long *)(param_1 + 0x48);
  *plVar3 = lVar5;
                    /* try { // try from 02672ab8 to 02772ae3 has its CatchHandler @ 02672b58 */
  thunk_FUN_021f190c(plVar3,lVar5);
  puVar2 = PTR_DAT_049be640;
  if (*plVar3 != 0) {
    uVar4 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049be640,*(undefined4 *)(*plVar3 + 0x18));
                    /* try { // try from 02672ae4 to 02772b23 has its CatchHandler @ 026728fc */
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar4);
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar4 = FUN_021f04e4(*(undefined8 *)puVar2,*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x18));
      *(undefined8 *)(param_1 + 0x58) = uVar4;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar4);
      if (*(long *)(param_1 + 0x48) != 0) {
                    /* try { // try from 02672b24 to 02772b27 has its CatchHandler @ 02672b44 */
                    /* try { // try from 02672b28 to 02772b2b has its CatchHandler @ 02672b40 */
                    /* try { // try from 02672b2c to 02772b2f has its CatchHandler @ 02672b3c */
                    /* try { // try from 02672b30 to 02772b73 has its CatchHandler @ 026728fc */
        uVar4 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049bc298,
                             *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x18));
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02672a58 with catch @ 02672b34
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02672a4c with catch @ 02672b38
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02672b2c with catch @ 02672b3c
                        */
        *(undefined8 *)(param_1 + 0x60) = uVar4;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02672b28 with catch @ 02672b40
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02672b24 with catch @ 02672b44
                        */
        thunk_FUN_021f190c((undefined8 *)(param_1 + 0x60),uVar4);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02672a74 with catch @ 02672b48
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02672a8c with catch @ 02672b4c
                        */
        if (*(char *)(param_1 + 0x20) == '\0') {
          fVar7 = (float)UnityEngine_Time__get_time_3c295c8(0);
        }
        else {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02672aa0 with catch @ 02672b50
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02672a34 with catch @ 02672b54
                        */
          fVar7 = (float)UnityEngine_Time__get_unscaledTime_3c296e8(0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02672ab8 with catch @ 02672b58
                        */
        }
        lVar5 = *plVar3;
        if (lVar5 != 0) {
          iVar6 = 0;
          do {
                    /* try { // try from 02672b74 to 02772b77 has its CatchHandler @ 02672b98 */
                    /* try { // try from 02672b78 to 02772b9b has its CatchHandler @ 026728fc */
            if (*(int *)(lVar5 + 0x18) <= iVar6) {
              return;
            }
            fVar8 = (float)UnityEngine_Random__Range_3c11c54(0,*(undefined4 *)(param_1 + 0x2c),0);
                    /* catch() { ... } // from try @ 02672b74 with catch @ 02672b98 */
                    /* try { // try from 02672b9c to 02772ba3 has its CatchHandler @ 02672bac */
            RisingMotesEffect__Spawn_2572bc4(fVar7 - fVar8,param_1,iVar6);
            lVar5 = *(long *)(param_1 + 0x48);
                    /* try { // try from 02672ba4 to 02772baf has its CatchHandler @ 026728fc */
            iVar6 = iVar6 + 1;
          } while (lVar5 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02672b9c with catch @ 02672bac
                        */
  FUN_021f06a0();
}

