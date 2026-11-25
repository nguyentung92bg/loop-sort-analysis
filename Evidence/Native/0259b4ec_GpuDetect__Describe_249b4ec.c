/* IL2CPP: GpuDetect$$Describe
System_String_o* GpuDetect__Describe (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GpuDetect$$Describe
   System_String_o* GpuDetect__Describe (const MethodInfo* method); */

void GpuDetect__Describe_249b4ec(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long lStack_70;
  long lStack_60;
  byte bStack_54;
  byte bStack_52;
  byte abStack_48 [4];
  byte abStack_44 [4];
  
  puVar1 = PTR_DAT_049b3d18;
  if ((bRam0000000004f4bab4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3d18);
    FUN_021f03f8(PTR_DAT_049c62e0);
    bRam0000000004f4bab4 = 1;
  }
  GpuDetect__GetRaw_2499904(&uStack_78);
  lVar4 = CONCAT44(uStack_74,uStack_78);
  GpuDetect__GetNormalized_2499a0c(&uStack_78);
  lVar5 = CONCAT44(uStack_74,uStack_78);
  plVar2 = (long *)FUN_021f04e4(*(undefined8 *)puVar1,7);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((lVar4 != 0) &&
     (lVar3 = thunk_FUN_0222c938(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_0259b75c:
    uVar6 = thunk_FUN_0223a53c();
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar6,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar4;
    thunk_FUN_021f190c(plVar2 + 4,lVar4);
    if ((lStack_70 != 0) &&
       (lVar4 = thunk_FUN_0222c938(lStack_70,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_0259b75c;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lStack_70;
      thunk_FUN_021f190c(plVar2 + 5,lStack_70);
      if ((lStack_60 != 0) &&
         (lVar4 = thunk_FUN_0222c938(lStack_60,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_0259b75c;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lStack_60;
        thunk_FUN_021f190c(plVar2 + 6,lStack_60);
        puVar1 = PTR_DAT_049b3bd0;
        lVar4 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_78);
        if ((lVar4 != 0) &&
           (lVar3 = thunk_FUN_0222c938(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
        goto LAB_0259b75c;
        if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
          plVar2[7] = lVar4;
          thunk_FUN_021f190c(plVar2 + 7,lVar4);
          if ((lVar5 != 0) &&
             (lVar4 = thunk_FUN_0222c938(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_0259b75c;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar5;
            thunk_FUN_021f190c(plVar2 + 8,lVar5);
            abStack_44[0] = bStack_54 & 1;
            lVar4 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x28),abStack_44);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_0222c938(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
            goto LAB_0259b75c;
            if (5 < *(uint *)(plVar2 + 3)) {
              plVar2[9] = lVar4;
              thunk_FUN_021f190c(plVar2 + 9,lVar4);
              abStack_48[0] = bStack_52 & 1;
              lVar4 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x28),abStack_48);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_0222c938(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
              goto LAB_0259b75c;
              puVar1 = PTR_DAT_049c62e0;
              if (6 < *(uint *)(plVar2 + 3)) {
                plVar2[10] = lVar4;
                thunk_FUN_021f190c(plVar2 + 10,lVar4);
                System_String__Format_2f7e034(*(undefined8 *)puVar1,plVar2,0);
                return;
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

