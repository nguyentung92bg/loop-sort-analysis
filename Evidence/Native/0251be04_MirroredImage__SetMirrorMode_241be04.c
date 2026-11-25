/* IL2CPP: MirroredImage$$SetMirrorMode
void MirroredImage__SetMirrorMode (MirroredImage_o* __this, bool horizontal, bool vertical, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MirroredImage$$SetMirrorMode
   void MirroredImage__SetMirrorMode (MirroredImage_o* __this, bool horizontal, bool vertical, const
   MethodInfo* method); */

void MirroredImage__SetMirrorMode_241be04(long *param_1,byte param_2,byte param_3)

{
  if ((*(byte *)(param_1 + 0x22) == (param_2 & 1)) &&
     (*(byte *)((long)param_1 + 0x111) == (param_3 & 1))) {
    return;
  }
  *(byte *)(param_1 + 0x22) = param_2 & 1;
  *(byte *)((long)param_1 + 0x111) = param_3 & 1;
                    /* WARNING: Could not recover jumptable at 0x0251be3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
  return;
}

