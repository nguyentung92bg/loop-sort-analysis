/* IL2CPP: GpuDetect.Raw$$ToString
System_String_o* GpuDetect_Raw__ToString (GpuDetect_Raw_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GpuDetect.Raw$$ToString
   System_String_o* GpuDetect_Raw__ToString (GpuDetect_Raw_o __this, const MethodInfo* method); */

void GpuDetect_Raw__ToString_249b76c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar3 = PTR_DAT_049b4540;
  if ((bRam0000000004f4bab5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c51d8);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049b4790);
    FUN_021f03f8(PTR_DAT_049c62e8);
    FUN_021f03f8(PTR_DAT_049c62f0);
    FUN_021f03f8(PTR_DAT_049c62f8);
    FUN_021f03f8(PTR_DAT_049b4e50);
    FUN_021f03f8(PTR_DAT_049c6300);
    FUN_021f03f8(PTR_DAT_049c6308);
    FUN_021f03f8(PTR_DAT_049c6310);
    FUN_021f03f8(PTR_DAT_049c6318);
    FUN_021f03f8(PTR_DAT_049c6320);
    FUN_021f03f8(PTR_DAT_049c6328);
    bRam0000000004f4bab5 = 1;
  }
  lVar4 = FUN_021f04e4(*(undefined8 *)puVar3,0xd);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_049c6308;
      thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x20));
      puVar3 = PTR_DAT_049b4e50;
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        lVar1 = *(long *)PTR_DAT_049b4e50;
        if (*param_1 != 0) {
          lVar1 = *param_1;
        }
        *(long *)(lVar4 + 0x28) = lVar1;
        thunk_FUN_021f190c((long *)(lVar4 + 0x28));
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_049c6300;
          thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x30));
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            lVar1 = *(long *)puVar3;
            if (param_1[1] != 0) {
              lVar1 = param_1[1];
            }
            *(long *)(lVar4 + 0x38) = lVar1;
            thunk_FUN_021f190c((long *)(lVar4 + 0x38));
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_049c6320;
              thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x40));
              if (5 < *(uint *)(lVar4 + 0x18)) {
                lVar1 = *(long *)puVar3;
                if (param_1[2] != 0) {
                  lVar1 = param_1[2];
                }
                *(long *)(lVar4 + 0x48) = lVar1;
                thunk_FUN_021f190c((long *)(lVar4 + 0x48));
                puVar2 = PTR_DAT_049c6318;
                puVar3 = PTR_DAT_049c51d8;
                if (6 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_049b4790;
                  thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x50));
                  uStack_34 = (undefined4)param_1[3];
                  uVar5 = thunk_FUN_0222c66c(*(undefined8 *)puVar3,&uStack_34);
                  uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar2,uVar5,0);
                  puVar3 = PTR_DAT_049c62f0;
                  if ((*(uint *)(lVar4 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar4 + 0x58) = uVar5;
                    thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x58),uVar5);
                    puVar2 = PTR_DAT_049b3bd0;
                    uStack_38 = *(undefined4 *)((long)param_1 + 0x1c);
                    uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_38);
                    uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar3,uVar5,0);
                    puVar3 = PTR_DAT_049c62f8;
                    if (8 < *(uint *)(lVar4 + 0x18)) {
                      *(undefined8 *)(lVar4 + 0x60) = uVar5;
                      thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x60),uVar5);
                      uStack_3c = (undefined4)param_1[4];
                      uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x48),&uStack_3c);
                      uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar3,uVar5,0);
                      puVar3 = PTR_DAT_049c62e8;
                      if (9 < *(uint *)(lVar4 + 0x18)) {
                        *(undefined8 *)(lVar4 + 0x68) = uVar5;
                        thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x68),uVar5);
                        auStack_40[0] = *(undefined1 *)((long)param_1 + 0x24);
                        uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x28),auStack_40);
                        uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar3,uVar5,0);
                        puVar3 = PTR_DAT_049c6328;
                        if (10 < *(uint *)(lVar4 + 0x18)) {
                          *(undefined8 *)(lVar4 + 0x70) = uVar5;
                          thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x70),uVar5);
                          auStack_44[0] = *(undefined1 *)((long)param_1 + 0x25);
                          uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x28),auStack_44);
                          uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar3,uVar5,0);
                          puVar3 = PTR_DAT_049c6310;
                          if (0xb < *(uint *)(lVar4 + 0x18)) {
                            *(undefined8 *)(lVar4 + 0x78) = uVar5;
                            thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x78),uVar5);
                            auStack_48[0] = *(undefined1 *)((long)param_1 + 0x26);
                    /* try { // try from 0259bb20 to 0269bbe3 has its CatchHandler @ 0259bb20
                       catch() { ... } // from try @ 0259bb20 with catch @ 0259bb20
                       catch() { ... } // from try @ 0259bc60 with catch @ 0259bb20
                       catch() { ... } // from try @ 0259bcd4 with catch @ 0259bb20
                       catch() { ... } // from try @ 0259bd6c with catch @ 0259bb20
                       catch() { ... } // from try @ 0259bdbc with catch @ 0259bb20 */
                            uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x28),auStack_48);
                            uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar3,uVar5,0);
                            if (0xc < *(uint *)(lVar4 + 0x18)) {
                              *(undefined8 *)(lVar4 + 0x80) = uVar5;
                              thunk_FUN_021f190c();
                              System_String__Concat_2f7dcb4(lVar4,0);
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
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

