Vec3 GetAngles(Vec3 source, Vec3 destination) {
    Vec3 rotate;
    float a = destination.x - source.x;
    float b = destination.y - source.y;
    float c = sqrt(a * a + b * b);
    float angles = atan(b / a);
    if (a > 0) {
        rotate.y = angles * (180 / 3.14159265359);
    }
    else {
        rotate.y = angles * (180 / 3.14159265359) + 180;
    }

    b = destination.z - source.z;
    angles = atan(b / c);
    rotate.x = -angles * (180 / 3.14159265359);

    return rotate;
}