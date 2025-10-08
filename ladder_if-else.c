#include <stdio.h>

int main() {
    int age18, aadhar, license, pan, voter;

    printf("Enter only 0 (No) or 1 (Yes) to answer the questions.\n");

    printf("Are you over 18? ");
    scanf("%d", &age18);

    printf("Do you have an Aadhar card? ");
    scanf("%d", &aadhar);

    printf("Do you have a Driving License? ");
    scanf("%d", &license);

    printf("Do you have a PAN card? ");
    scanf("%d", &pan);

    printf("Do you have a Voter ID? ");
    scanf("%d", &voter);

    // Validate inputs
    if ((age18 != 0 && age18 != 1) || (aadhar != 0 && aadhar != 1) ||
        (license != 0 && license != 1) || (pan != 0 && pan != 1) ||
        (voter != 0 && voter != 1)) {
        printf("🚫 Invalid input. Only enter 0 or 1.\n");
    }
    else if (age18 == 1 && aadhar && license && pan && voter) {
        printf("✅ Fully eligible adult with complete documentation.\n");
    }
    else if (age18 == 1 && (aadhar + license + pan + voter) >= 3) {
        printf("⚠️ Adult with sufficient but not full documentation.\n");
    }
    else if (age18 == 1 && (aadhar + license + pan + voter) < 3) {
        printf("🔒 Adult with insufficient documentation.\n");
    }
    else if (age18 == 0 && (license || voter)) {
        printf("❓ Minor with license or voter ID? Check legality.\n");
    }
    else if (age18 == 0 && aadhar && pan == 0 && license == 0 && voter == 0) {
        printf("🔒 Minor with only Aadhar. ID incomplete.\n");
    }
    else if (age18 == 0 && aadhar == 0 && pan == 0 && license == 0 && voter == 0) {
        printf("❌ Minor with no documentation. Not eligible for any government services.\n");
    }
    else {
        printf("📄 Partial data present. Please complete your KYC.\n");
    }

    return 0;
}
