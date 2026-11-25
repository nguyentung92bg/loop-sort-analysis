/* IL2CPP: GpuDetect.Normalized$$ToString
System_String_o* GpuDetect_Normalized__ToString (GpuDetect_Normalized_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GpuDetect.Normalized$$ToString
   System_String_o* GpuDetect_Normalized__ToString (GpuDetect_Normalized_o __this, const MethodInfo*
   method); */

void GpuDetect_Normalized__ToString_249bb88(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_049b4540;
  if ((bRam0000000004f4bab6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049b4790);
    FUN_021f03f8(PTR_DAT_049c6330);
    FUN_021f03f8(PTR_DAT_049c6338);
                    /* try { // try from 0259bbe4 to 0269bbe7 has its CatchHandler @ 0259bd80 */
    FUN_021f03f8(PTR_DAT_049c6340);
    FUN_021f03f8(PTR_DAT_049b4e50);
                    /* try { // try from 0259bbf4 to 0269bbf7 has its CatchHandler @ 0259bd78 */
    FUN_021f03f8(PTR_DAT_049c6348);
    FUN_021f03f8(PTR_DAT_049c6350);
    bRam0000000004f4bab6 = 1;
  }
                    /* try { // try from 0259bc14 to 0269bc5f has its CatchHandler @ 0259bd88 */
  lVar3 = FUN_021f04e4(*(undefined8 *)puVar2,10);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_049c6348;
      thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x20));
      puVar2 = PTR_DAT_049b4e50;
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                    /* try { // try from 0259bc60 to 0269bca3 has its CatchHandler @ 0259bb20 */
        lVar1 = *(long *)PTR_DAT_049b4e50;
        if (*param_1 != 0) {
          lVar1 = *param_1;
        }
        *(long *)(lVar3 + 0x28) = lVar1;
        thunk_FUN_021f190c((long *)(lVar3 + 0x28));
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_049c6330;
                    /* try { // try from 0259bca4 to 0269bcd3 has its CatchHandler @ 0259bd88 */
          thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x30));
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            lVar1 = *(long *)puVar2;
            if (param_1[1] != 0) {
              lVar1 = param_1[1];
            }
            *(long *)(lVar3 + 0x38) = lVar1;
            thunk_FUN_021f190c((long *)(lVar3 + 0x38));
                    /* try { // try from 0259bcd4 to 0269bd5f has its CatchHandler @ 0259bb20 */
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_049c6338;
              thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x40));
              if (5 < *(uint *)(lVar3 + 0x18)) {
                lVar1 = *(long *)puVar2;
                if (param_1[2] != 0) {
                  lVar1 = param_1[2];
                }
                *(long *)(lVar3 + 0x48) = lVar1;
                thunk_FUN_021f190c((long *)(lVar3 + 0x48));
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_049c6340;
                  thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x50));
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                    /* try { // try from 0259bd60 to 0269bd63 has its CatchHandler @ 0259bd84 */
                    /* try { // try from 0259bd64 to 0269bd67 has its CatchHandler @ 0259bd7c */
                    /* try { // try from 0259bd68 to 0269bd6b has its CatchHandler @ 0259bd74 */
                    lVar1 = *(long *)puVar2;
                    /* try { // try from 0259bd6c to 0269bda3 has its CatchHandler @ 0259bb20 */
                    if (param_1[3] != 0) {
                      lVar1 = param_1[3];
                    }
                    *(long *)(lVar3 + 0x58) = lVar1;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259bd68 with catch @ 0259bd74
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259bbf4 with catch @ 0259bd78
                        */
                    thunk_FUN_021f190c((long *)(lVar3 + 0x58));
                    puVar2 = PTR_DAT_049c6350;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259bd64 with catch @ 0259bd7c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259bbe4 with catch @ 0259bd80
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259bd60 with catch @ 0259bd84
                        */
                    if (8 < *(uint *)(lVar3 + 0x18)) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259bc14 with catch @ 0259bd88
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 0259bca4 with catch @ 0259bd88
                        */
                      *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)PTR_DAT_049b4790;
                    /* try { // try from 0259bda4 to 0269bda7 has its CatchHandler @ 0259bdb0 */
                      thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x60));
                    /* catch() { ... } // from try @ 0259bda4 with catch @ 0259bdb0 */
                    /* try { // try from 0259bdb4 to 0269bdbb has its CatchHandler @ 0259bdc4 */
                      uStack_24 = (undefined4)param_1[4];
                    /* try { // try from 0259bdbc to 0269bdc7 has its CatchHandler @ 0259bb20 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0259bdb4 with catch @ 0259bdc4
                        */
                      uVar4 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24
                                                );
                      uVar4 = System_String__Format_2f73700(*(undefined8 *)puVar2,uVar4,0);
                      if (9 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x68) = uVar4;
                        thunk_FUN_021f190c();
                        System_String__Concat_2f7dcb4(lVar3,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

